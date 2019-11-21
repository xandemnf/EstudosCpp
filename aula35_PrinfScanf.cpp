#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

/*
d,i -> int
x,X -> Hexadecimal
u -> int sem sinal
s -> String
f -> float
p -> Ponteiros
*/

printf("Alexandre Goncalves\nCurso de C++\n");

printf("Alexandre Goncalves\n\0Curso de C++\n");

int num1=1, num2=2, num3=3;

char nome[10] = "Alexandre";

printf("Nome: %s\n", nome);

printf("NUM1: %i\nNUM2: %d\nNUM3: %i\n",num1,num2,num3);

int numero;
char name[15];
printf("Digite um numero e um nome: ");
scanf("%d %s", &numero, &name);
printf("Numero digitado: %d\nNome Digitado: %s", numero, name);


return 0;
}
