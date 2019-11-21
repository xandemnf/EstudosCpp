#include<iostream>

using namespace std;

class Veiculo{
private:
   const char *nome;
   const char *cor;
public:
   int velMax;
   int rodas;
   void setNome(const char *no){
      nome=no;
   }
   const char *getNome(){
      return nome;
   }
   void setCor(const char *co){
      cor=co;
   }
   const char *getCor(){
      return cor;
   }
   virtual void imp(){ //virtual indica que o metodo sera sobreescrito numa classe filha
      cout << "Nome: " << nome << endl;
      cout << "Cor: " << cor << endl;
      cout << "Rodas: " << rodas << endl;
      cout << "Vel. Max: " << velMax << endl;
   }
};

class Carro:public Veiculo{
public:
   Carro(){
      velMax=160;
      rodas=4;
      setNome("Carro");
      setCor("Branco");
   }
};


class Moto:public Veiculo{
public:
   Moto(){
      velMax=299;
      rodas=2;
      setNome("Kawazaki");
      setCor("Verde");
   }
};

class Militar:public Veiculo{
public:
   int municao;
   bool armamento;
   Militar(bool arma, int mu):armamento(arma),municao(mu){
      velMax=60;
      rodas=6;
      setNome("Tanque");
      setCor("Camuflado");
      if(arma){
         municao=mu;
      }else{
         municao=0;
      }
   }
      void imp() override{ //esse metodo vai sobreescrever o metodo virtual
         cout << "Nome: " << getNome() << endl;
         cout << "Cor: " << getCor() << endl;
         cout << "Rodas: " << rodas << endl;
         cout << "Vel. Max: " << velMax << endl;
         cout << "Arma: " << armamento << endl;
         cout << "Municao: " << municao<< endl;
      }
};

int main(){

Veiculo v1;

v1.setNome("Carrao");
v1.setCor("Ouro");
v1.velMax=1000;
v1.rodas=8;

v1.imp();

Carro c1;
c1.imp();
cout << endl;

Moto m1;
m1.imp();
cout << endl;

Militar m0(1,500);
m0.imp();

return 0;
}
