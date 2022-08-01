#include <iostream>
#include <locale>
using namespace std;

int main(int argc, float argv) {
setlocale(LC_ALL, "portuguese");

float valor;

printf ("\nDigite o valor que deseja investir : ");
scanf ("%f", &valor);
printf ("\nEscolha o plano: \n[1] Plano A (rendimento 2%, resgate em 24 meses). \n[2] Plano B (rendimento 0,8%, resgate em 12 meses).\n\n");

scanf ("%f", &valor);

printf ("%.2f",valor);

return 0;
}

/*
Voc� foi contratado por uma ag�ncia de cr�ditos pessoais para implementar um programa
que calcula o total de rendimentos (usando juros simples) que um cliente ter� em
determinado investimento. 

- O cliente informar� o valor que pretende investir, qual o plano e quanto tempo pretende deixar o dinheiro investido. 

_ Plano A - o rendimento � de 2%, o resgate em no m�nimo 24 meses. 

_ Plano B - o rendimento � de 0,8% o resgate em no m�nimo 12 meses.

Fa�a um programa que pe�a as informa��es para o usu�rio e, a partir de uma fun��o, calcule o rendimento que
o cliente ter�.

Para implementar a solu��o, primeiro voc� deve saber a f�rmula de juros simples:

j = C * i * t (formula).
j � o juros
C � o capital inicial
i � a taxa 
t � o tempo.

Exemplo:
Capital (C) = R$ 1.200
Tempo (t) = 14 meses
Taxa (i) = 2% ao m�s = 2/100 = 0,02

F�rmula dos juros simples:
J = C � i � t
J = 1200 � 0,02 � 14
J = 336


*/