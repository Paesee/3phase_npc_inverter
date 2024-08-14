%% PROJETO CONTROLADOR RESSONANTE PARA VSC1 (FORMADOR DE REDE) %%
clc
clear all
close all
s = tf('s');

%% TEMPOS E FREQUENCIAS

% do sistema
f_rede = 60;
t_rede = 1/f_rede;
f = 20e3;
ts = 1/f;
omega0 = 2*pi*f_rede;

% vetor de tempo
t_final = 10*t_rede;
t = 0:ts:t_final;

% sinal de referencia
sin_w60 = sin(omega0*t);

%% MODELO BASE: Malha de Corrente

% parametros do Filtro LC + Carga
R1 = 0.01;
L1 = 0.5e-3;
C1 = 150e-6;
RD = 0.1;
R0 = 0.05 * 2.58133333333;

num1 = RD*R0;
den1 = L1*(R0+RD);
num2 = RD;
den2 = L1*(R0+RD);
den3 = C1*(R0+RD);

a11 = -R1/L1 - num1/den1;
a12 = -1/L1  + num2/den2;
a21 = +R0/den3;
a22 = -1/den3;

b11 = +1/L1;
b21 = 0;

A = [a11 a12; a21 a22];
B = [b11; b21];
C = [1 0];
D = 0;
sys = ss(A, B, C, D);

%% PROJETO: Controlador de Corrente

Q = [1000 0; 0 1];
R = 1;
K = lqrd(A, B, Q, R, ts)
K = lqr(A, B, Q, R);

%% MODELO REALIMENTADO: Controlador de Corrente

R0 = 1 * 2.58133333333;

num1 = RD*R0;
den1 = L1*(R0+RD);
num2 = RD;
den2 = L1*(R0+RD);
den3 = C1*(R0+RD);

a11 = -R1/L1 - num1/den1;
a12 = -1/L1  + num2/den2;
a21 = +R0/den3;
a22 = -1/den3;

b11 = +1/L1;
b21 = 0;

A = [a11 a12; a21 a22];
B = [b11; b21];
C = [1 0];
D = 0;

Amf = A-B*K;
sys_mf = ss(Amf, B, C, D);

%% PLOTAGEM: Controlador de Corrente

figure(1)
subplot(2,1,1)
rlocus(sys);
subplot(2,1,2)
rlocus(sys_mf);

%% PROJETO: Controlador Ressonante para Tensão

a = 0.1;
R = [0 1; -exp(-2*a*ts) 2*exp(-a*ts)*cos(omega0*ts)];
T = [0; 1];

ss_gprd = ss(R, T, [0 1], 0, ts);
ss_gpr = d2c(ss_gprd);
[Rc, Tc, Cc, Dc] = ssdata(ss_gpr);
[num, den] = ss2tf(Rc, Tc, Cc, Dc);
gpr = tf(num, den)
bode(gpr)

%% MODELO BASE: Controlador de Tensão
kr = 11;
A = [Amf zeros(2,2); -Tc*[0 1] Rc];
B = [kr * B; zeros(2,1)];
C = [0 1 0 0];
D = 0;

%% CONTROLABILIDADE: Controlador de Tensão
rank_ctrb = rank(ctrb(A,B))

%% PROJETO: Controlador de Tensão

% DLQR
Q = eye(4,4);
R = 2000000;
K = lqrd(A, B, Q, R, ts)
