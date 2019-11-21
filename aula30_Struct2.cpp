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

Carro car1, car2, car3, car4;

car1.insere("Gol", "Preto", 1000, 200);
car2.insere("Palio", "Branco", 1400, 220);
car3.insere("Fiesta", "Verde", 1200, 210);
car4.insere("Ferrari", "Vermelho", 5000, 420);

car1.mostra();
car4.mostra();

car4.mudaVel(450);

car4.mostra();

return 0;
}
