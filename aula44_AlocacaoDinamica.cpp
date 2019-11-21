#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){

   char vnome[50];

   //cin >> vnome;
   //cout << vnome << endl;

   cout << "Digite algo para a string: ";

   gets(vnome);

   cout << vnome << endl;
   cout << "Tamanho de Vnome: " << sizeof(vnome) << endl;

   char *aloca;
   aloca = (char *) malloc(sizeof(char));
   gets(aloca);

   cout << aloca << endl;
   cout << "Tamanho de Aloca: " << sizeof(aloca) << endl;





}
