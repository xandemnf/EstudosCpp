#include<iostream>

using namespace std;

int main(){

//Ponteiro Armazena o Endere�o de Memoria de outra Variavel

string veiculo="carro";
string *pv;

pv = &veiculo; //Ponteiro Pv recebe o endere�o da variavel Veiculo

cout << veiculo << "\n";
cout << pv << "\n" << &veiculo << "\n\n";

*pv = "moto"; //No endere�o apontado por PV adicione o valor Moto
cout << veiculo << "\n";
cout << pv << "\n" << *pv << "\n\n";


return 0;
}
