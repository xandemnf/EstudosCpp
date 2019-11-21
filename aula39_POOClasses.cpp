#include<iostream>

using namespace std;

class Aviao{

public:
   int vel=0;
   int velMax;
   string tipo;
   void iniAv(int tp);


private:

};

void Aviao::iniAv(int tp){//1 - Jato; 2-MonoMotor;3-Planador
   if(tp==1){
      this->velMax = 800;
      this->tipo = "Jato";
   }else if(tp==2){
      this->velMax = 350;
      this->tipo = "MonoMotor";
   }else if(tp==3){
      this->velMax = 200;
      this->tipo = "Planador";
   }
}

int main(){

Aviao *av1 = new Aviao();
Aviao *av2 = new Aviao();
Aviao *av3 = new Aviao();

av1->iniAv(1);
av2->iniAv(2);
av3->iniAv(3);

cout << av1->velMax << endl;
cout << av1->tipo << endl << endl;

cout << av2->velMax << endl;
cout << av2->tipo << endl << endl;

cout << av3->velMax << endl;
cout << av3->tipo << endl << endl;

return 0;
}
