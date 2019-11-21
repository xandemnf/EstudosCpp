#include<iostream>

using namespace std;

class Veiculo{
private:
   int velMax;
   int potencia;
public:
   int rodas;
   const char *nome;
protected:
   int portas;
   const char *cor;
};

class Carro:public Veiculo{
public:
      Carro(){
    //velMax=300; //Nao posso acessar pq é uma propriedade privada
    //potencia=150; //Nao posso acessar pq é uma propriedade privada
      rodas=4;
      nome="Carrudu";
      portas=4;
      cor="Azul";

      //cout << VelMax << endl;
      //cout << potencia << endl;
      cout << rodas << endl;
      cout << nome << endl;
      cout << portas << endl;
      cout << cor << endl << endl;
   }
};

class Moto{
public:
   Carro c; //classe externalizada

   Moto(){
      //velMax=300; //Private
      //potencia=150; //Private
      c.rodas=2;
      c.nome="Motudu";
      //portas=0; //Protected
      //cor="Azul"; //Protected

      //cout << VelMax << endl; //Nao posso acessar pq é uma propriedade private
      //cout << potencia << endl; //Nao posso acessar pq é uma propriedade private
      cout << c.rodas << endl;
      cout << c.nome << endl;
      //cout << portas << endl; //Nao posso acessar pq é uma propriedade protected
      //cout << cor << endl; //Nao posso acessar pq é uma propriedade protected
   }
};

int main(){

Carro c1;
cout << endl;
Moto m1;



return 0;
}
