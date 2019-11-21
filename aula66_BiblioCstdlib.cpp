#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

double num, num2;
char numero[80], numero2[80];

cout << "Digite um número: ";
cin >> numero;
num = atof(numero);
cout << num << endl;

cout << "Digite outro número: ";
cin >> numero2;
num2 = strtod(numero2, NULL);
cout << num2 << endl << endl;

//atof - Alfa to Float
//atoi - Alfa to Int
//atol - Alfa to Long
//atoll - Alfa to Long Long Int
//atof - Alfa to Float

//strtod - String to double
//strtof - String to  float
//strtol - String to Long
//strtoll - String to Long Long

srand(time(NULL));
cout << "MEGA SENA: \n";
for(int i=0;i<6;i++){
   cout << rand()%60 << endl;
}
cout << "\n\n";

//Gerenciamento Dinâmico de Memoria
//Calloc, Malloc, Free, Realloc;

int tam2=10, num3;
int *vetor;
vetor=(int*)calloc(tam2, sizeof(int));
//Calloc nao retprma

for(int i=0;i<tam2;i++){
   vetor[i] = rand()%10;
   cout << "Indice " << i << ": " <<vetor[i] << endl;
}

cout << endl;

int tam3=10, num4;
int *vetor2;
vetor2=(int*)malloc(tam3);
//Malloc retorn um ponteiro para o primeiro elemento;

for(int i=0;i<tam3;i++){
   vetor2[i] = rand()%100;
   cout << "Indice " << i << ": " << vetor2[i] << endl;;
}

free(vetor);
free(vetor2);


return 0;
}
