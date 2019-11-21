#include <iostream>

using namespace std;

int main(){

//(expressao) ? valor1 : valor2;

int n1, n2, nota;

string res;

cout << "Digite N1:";
cin >> n1;
cout << "Digite N2:";
cin >> n2;

nota = n1+n2;

//  >= 60   Aprovado
//  < 60    Reprovado

//(nota >= 60) ? res="Aprovado" : res="Reprovado";
res = (nota >=60) ? "Aprovado" : "Reprovado";

cout << "Situacao do Aluno: " << res << "\n\n";

int x;

cout << "Digite x1: ";
cin >> x;

(x<=5) ? x++ : x--;

cout << "O valor de x eh: " << x;




return 0;
}
