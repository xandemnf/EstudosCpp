#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h> //Para usar o getch();
#include<ctype.h> //Para usar o isdigit();

using namespace std;

void pedeNumero();

char digitado[50];
char num[10];
int numero;

int main(){

printf("Digite um numero: ");

pedeNumero();


cout << "\n\nDigite outro numero: ";
cin >> num;
numero = atoi(num);
cout << "O numero digitado foi: " << numero;

return 0;
}

void pedeNumero(){
   char c;
   int i=0;

   do{
      c = getch();
      if(isdigit(c)!=0){
         digitado[i]=c;
         i++;
         printf("%c", c);
      }else if(c==8&&i){ //8 = BackSpace na tab ASCI
         digitado[i]='\0';
         i--;
         printf("\b \b");
      }
   }while(c!=13); //13 = Enter na tab ASCI

   digitado[i]='\0';
}


