#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

char palavra[30], letra[1], secreta[30];
int tam=0, i=0, chances=6, acertos=0;
bool acerto=false;

cout << "Fale para seu amigo tampar os olhos e digite a palavra SECRETA: \n- ";
cin >> palavra;

system("cls");

while(palavra[i] != '\0'){
   i++;
   tam++;
}

for(i=0;i<30;i++){
   secreta[i] = '-';
}

while((chances>0) && (acertos<tam)){
   cout << "Jogadas Restantes: " << chances << "\n\n";
   cout << "Palavra secreta: ";
   for(i=0;i<tam;i++){
      cout << secreta[i];
   }
   cout << "\n\nDigite uma Letra: ";
   cin >> letra[0];
   for(i=0;i<tam;i++){
      if(palavra[i]==letra[0]){
         acerto=true;
         secreta[i] = palavra[i];
         acertos++;
         system("cls");
      }
   }
   if(!acerto){
      chances--;
      system("cls");
   }
   acerto=false;
}

if(acertos==tam){
   cout << "Voce Venceu!";
}else{
   cout << "Voce Perdeu!";
}

system("pause");



return 0;
}
