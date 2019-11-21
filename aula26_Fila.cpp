#include<iostream>
#include<queue>

using namespace std;

int main(){

queue <string> cartas;

cartas.push("Rei de Copas");
cartas.push("Rei de Espada");
cartas.push("Rei de Ouro");
cartas.push("Rei de Paus");

cout << "Tamanho da Fila: " << cartas.size() << "\n";
cout << "Primeira Carta: " << cartas.front() << "\n";
cout << "Ultima Carta: " << cartas.back() << "\n\n";

while(!cartas.empty()){
   cout << "Primeira Carta: " << cartas.front() << "\n\n";
   cartas.pop();
}


/*
empty
size
front
back
push
pop
*/





return 0;
}
