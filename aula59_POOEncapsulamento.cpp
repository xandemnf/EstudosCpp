#include<iostream>
#include<memory>

using namespace std;

//MODELO MODERNO
class CarroModerno{
private:
   int velMax;
   void setVelMax(int vm){
      this->velMax=vm;
   }

public:
   int potencia;
   const char *nome;
   int getVelMax(){
      return velMax;
   }

   CarroModerno(const char *n, int p):nome(n),potencia(p){ //Lista de Inicialização
      if(p<=100){
         //this->setVelMax(120);
         this->velMax=120;
      }else if(p>100 && p<200){
         //this->setVelMax(200);
         this->velMax=200;
      }else if(p>200 && p<=500){
         //this->setVelMax(360);
         this->velMax=360;
      }
   }
};

int main(){

//Com Smart Pointer
unique_ptr<CarroModerno>c1(new CarroModerno{"Lamborguini", 500});
cout << "Nome: "<< c1->nome <<endl;
cout << "Potencia: "<< c1->potencia<<endl;
cout << "Vel. Maxima: "<< c1->getVelMax() <<endl;


return 0;
}
