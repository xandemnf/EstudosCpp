#include<iostream>

using namespace std;

void contador(int num, int cont=0);
void contadore(int num, int cont=0);


int main(int argc, char *argv[]){

contador(5);

cout << "\n";

contadore(10);

return 0;
}

void contador(int num, int cont){
   for(int i=0;i<=num;i++){
      cout << i << "\n";
   }
}

void contadore(int num, int cont){
   cout << cont << "\n";
   if(cont<num){
      contadore(num,++cont);
   }
}
