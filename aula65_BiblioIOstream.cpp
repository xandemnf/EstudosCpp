#include<iostream>

using namespace std;

int main(){

string nome;
int idade;
char frase[140];
char poema[140];

cout << "Digite seu nome e idade: ";
cin >> nome >> idade;
cout << "Nome: " << nome << "\nIdade: " << idade << endl;
//cout << "Tamanho: " << cin.gcount() << endl; //Gcount n�o conta String
//OBS: O ENTER TA SENDO CAPTURADO, LOGO FINALIZA PROXIMAS INSTRU��ES
getchar();

cout << "Digite uma Frase: ";
cin.get(frase, 140);//Get lê caracter por caracter
cout << frase << endl;
cout << "Tamanho: " << cin.gcount() << endl;
getchar();

cout<<"Digite um poema: ";
cin.getline(poema,140); //GetLine armazera o caracter finalizados '\0'
cout << poema << endl;
cout << "Tamanho: " << cin.gcount() << endl;

char p, u;
cout << "Digite seu nome de novo: ";
p=cin.get();
cin.ignore(80, ' ');
u=cin.get();
cout << p << " - " << u << endl;




return 0;
}
