#include<iostream>

using namespace std;

class Carro{
private:
   int velMax;
   const char *nome;
public:
   int potencia;
   int getVelMax(){
      return velMax; //this->velMax;
   }
   const char *getNome(){
      return nome;
   }
   Carro(){
      velMax=120;
      potencia=85;
      nome="Popular";
   }
   Carro(int pt, const char *no):potencia(pt),nome(no){
      if(pt<=100){
         velMax=120;
      }else if(pt>100 && pt<200){
         velMax=200;
      }else{
         velMax=300;
      }
   }
};

int main(){

Carro c1;
cout << c1.getNome() << " - " << c1.potencia << " - " << c1.getVelMax() << endl;

Carro c2(200, "Mercedez");
cout << c2.getNome() << " - " << c2.potencia << " - " << c2.getVelMax() << endl;

return 0;
}
