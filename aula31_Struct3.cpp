#include<iostream>

using namespace std;

struct Carro{
   string marca;
   string cor;
   int power;
   int velMax;

   void insere(string marcaT, string corT, int powerT, int velMaxT){
      marca = marcaT;
      cor = corT;
      power = powerT;
      velMax = velMaxT;
   }

   void mostra(){
      cout << "Marca: " << marca << "\n";
      cout << "Cor: " << cor << "\n";
      cout << "Potencia: " << power << "\n";
      cout << "Velocidade Maxima: " << velMax << "\n\n";
   }

   void mudaVel(int newVel){
      int vel = newVel;
      if(vel>velMax){
         velMax=vel;
      }
      if(vel<0){
         velMax=0;
      }
   }
};

int main(){

Carro *carros = new Carro[5];

Carro car1, car2, car3, car4, car5;

carros[0]=car1;
carros[1]=car2;
carros[2]=car3;
carros[3]=car4;
carros[4]=car5;

carros[0].insere("Gol", "Preto", 1000, 200);
carros[1].insere("Palio", "Branco", 1400, 220);
carros[2].insere("Fiesta", "Cinza", 1000, 210);
carros[3].insere("Ferrari", "Vermelho", 5000, 420);
carros[4].insere("ix35", "Prata", 3200, 260);

for(int i=0;i<5;i++){
   carros[i].mostra();
}


return 0;
}
