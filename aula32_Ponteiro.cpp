#include<iostream>

using namespace std;

int main(){

//Ponteiro Armazena o Endereço de Memoria de outra Variavel

string veiculo="carro";
string *pv;

pv = &veiculo; //Ponteiro Pv recebe o endereço da variavel Veiculo

cout << veiculo << "\n";
cout << pv << "\n" << &veiculo << "\n\n";

*pv = "moto"; //No endereço apontado por PV adicione o valor Moto
cout << veiculo << "\n";
cout << pv << "\n" << *pv << "\n\n";


return 0;
}
