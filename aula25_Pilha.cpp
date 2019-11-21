#include<iostream>
#include<stack>

using namespace std;

int main(){

stack <string> cartas;

if(cartas.empty()){
   cout << "Pilha Vazia\n";
}else{
   cout << "Pilha com cartas\n";
}

cartas.push("Rei de Copas");
cartas.push("Rei de Espadas");
cartas.push("Rei de Paus");
cartas.push("Rei de Ouro");

cout << "Tamanho da Pilha: " << cartas.size() << "\n";
cout << "Carta do Topo: " << cartas.top() << "\n";
cartas.pop();
cout << "Tamanho da Pilha: " << cartas.size() << "\n";
cout << "Carta do Topo: " << cartas.top() << "\n";

if(cartas.size()==0){
   cout << "Pilha Vazia\n";
}else{
   cout << "Pilha com cartas\n";
}

while(!cartas.empty()){
   cartas.pop();
}

if(cartas.empty()){
   cout << "Pilha Vazia\n";
}else{
   cout << "Pilha com cartas\n";
}

//Push();
//pop();
//top();
//size();
//empty();
return 0;
}
