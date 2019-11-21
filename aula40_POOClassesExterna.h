#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{

public:
   int vel=0;
   int velMax;
   std::string tipo;
   Aviao(int tp); //Metodo Construtor tem o mesmo nome da Classe
   void imp();

private:

};

Aviao::Aviao(int tp){//1 - Jato;2 - MonoMotor;3 - Planador
   if(tp==1){
      tipo="Jato";
      velMax=800;
   }else if(tp==2){
      tipo="MonoMotor";
      velMax=350;
   }else if(tp==3){
      tipo="Planador";
      velMax=200;
   }
}

void Aviao::imp(){
   std::cout << "Tipo: " << tipo << std::endl;
   std::cout << "Velocidade Maxima: " << velMax << std::endl << std::endl;
}

#endif // AVIAO_H_INCLUDED
