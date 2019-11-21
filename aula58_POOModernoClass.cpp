#include<iostream>
#include<memory>

using namespace std;

//MODELO ANTIGO
class Carro{
public:
   int velMax;
   int potencia;
   const char *nome;
   Carro(const char *n, int p){
      this->nome=n;
      this->potencia=p;
      if(p<=100){
         this->velMax=120;
      }else if(p>100 && p<200){
         this->velMax=200;
      }else if(p>200 && p<500){
         this->velMax=360;
      }
   }
};

//MODELO MODERNO
class CarroModerno{
public:
   int velMax;
   int potencia;
   const char *nome;
   CarroModerno(const char *n, int p):nome(n),potencia(p){ //Lista de Inicialização
      if(p<=100){
         this->velMax=120;
      }else if(p>100 && p<200){
         this->velMax=200;
      }else if(p>200 && p<=500){
         this->velMax=360;
      }
   }
};

int main(){

//MODELO ANTIGO
Carro *c1 = new Carro("Mustang", 101);
cout << "Nome: "<< c1->nome <<endl;
cout << "Potencia: "<< c1->potencia<<endl;
cout << "Vel. Maxima: "<< c1->velMax <<endl;
delete c1;

cout << endl;

//MODELO MODERNO
CarroModerno c2{"Ferrari", 500};
cout << "Nome: "<< c2.nome <<endl;
cout << "Potencia: "<< c2.potencia<<endl;
cout << "Vel. Maxima: "<< c2.velMax <<endl;

cout << endl;

//Com Smart Pointer
unique_ptr<CarroModerno>c3(new CarroModerno{"Lamborguini", 700});
cout << "Nome: "<< c3->nome <<endl;
cout << "Potencia: "<< c3->potencia<<endl;
cout << "Vel. Maxima: "<< c3->velMax <<endl;


return 0;
}
