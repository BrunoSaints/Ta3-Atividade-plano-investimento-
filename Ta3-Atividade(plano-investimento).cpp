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
Você foi contratado por uma agência de créditos pessoais para implementar um programa
que calcula o total de rendimentos (usando juros simples) que um cliente terá em
determinado investimento. 

- O cliente informará o valor que pretende investir, qual o plano e quanto tempo pretende deixar o dinheiro investido. 

_ Plano A - o rendimento é de 2%, o resgate em no mínimo 24 meses. 

_ Plano B - o rendimento é de 0,8% o resgate em no mínimo 12 meses.

Faça um programa que peça as informações para o usuário e, a partir de uma função, calcule o rendimento que
o cliente terá.

Para implementar a solução, primeiro você deve saber a fórmula de juros simples:

j = C * i * t (formula).
j é o juros
C é o capital inicial
i é a taxa 
t é o tempo.

Exemplo:
Capital (C) = R$ 1.200
Tempo (t) = 14 meses
Taxa (i) = 2% ao mês = 2/100 = 0,02

Fórmula dos juros simples:
J = C × i × t
J = 1200 × 0,02 × 14
J = 336


*/