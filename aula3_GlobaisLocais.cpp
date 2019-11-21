#include<iostream>

using namespace std;

int n1, n2; //Variaveis Globais

int main(){

	int n3, n4; //Variaveis Locais
	int res;

	//Operadores matemáticos; + - / * % ()

	n1 = 11;
	n2 = 3;
	n3 = 5;
	n4 = 2;

	res = n1+n2+n3+n4;
   int res2 = n3%n2;

	cout << "A soma de N1 + N2 + N3 + N4 e: "<< res << "\n\n";
   cout << "O resto da divisao de N3 por N2 e: " << res2 << "\n";

	return 0;
}
