#include <iostream>
#include <stdlib.h>
// #include<cstdlib>

using namespace std;

int main(){

int n1, n2, res;
char opc;

//Label
inicio:

system("cls");

cout << "Digite o Valor da N1: ";
cin >> n1;
cout << "Digite o Valor da N2: ";
cin >> n2;
res = n1+n2;

//  >= 50          Aprovado
//  >=40 e <=49    Recuperação
//  <40            Reprovado

if(res>=50){
   cout << "\n\nAprovado";
}else if(res>=40 && res<=49){
   cout << "\n\nRecuperação";
}else{
   cout << "n\nReprovado";
}

cout << "\n\nDigitar mais notas: s/n";
cin >> opc;

if(opc=='s' or opc=='S'){
   goto inicio;
}

return 0;
}
