#include<iostream>

using namespace std;

struct Carro{
   string nome;
   string cor;
   int power;
   int velMax;
};

int main(int argc, char *argv[]){

Carro car1;

car1.nome = "Gol";
car1.cor = "Cinza";
car1.power = 1000;
car1.velMax = 200;

cout << "Marca: " << car1.nome << "\n";
cout << "Cor: " << car1.cor << "\n";
cout << "Potencia: " << car1.power << "\n";
cout << "Velocidade Maxima: " << car1.velMax << "\n";

cout << "\n";

Carro car2;

car2.nome = "Palio";
car2.cor = "Branco";
car2.power = 1000;
car2.velMax = 220;

cout << "Marca: " << car2.nome << "\n";
cout << "Cor: " << car2.cor << "\n";
cout << "Potencia: " << car2.power << "\n";
cout << "Velocidade Maxima: " << car2.velMax << "\n";

return 0;
}
