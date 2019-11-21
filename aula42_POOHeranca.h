#ifndef HERANCA_H_DEFINED
#define HERANCA_H_DEFINED

class Veiculo{
public:
   int vel;
   int blind;
   int rodas;
   void setTipo(int tp);
   void setVelMax(int vm);
   void setArma(bool arm);
   void imp();

private:
   int tipo; //1=Moto; 2=Carro; 3=Caminhao; 4=Tanque
   int velMax;
   bool arma;
};

class Moto:public Veiculo{
public:
   Moto();
};

Moto::Moto(){
   vel=0;
   blind=0;
   rodas=2;
   setTipo(1);
   setVelMax(299);
   setArma(false);
}

void Veiculo::setTipo(int tp){
   tipo=tp;
}

void Veiculo::setVelMax(int vm){
   velMax=vm;
}

void Veiculo::setArma(bool arm){
   arma=arm;
}

void Veiculo::imp(){
   std::cout << "Tipo de Veiculo: " << tipo << std::endl;
   std::cout << "Velocidade Atual: " << vel << std::endl;
   std::cout << "Velocidade Maxima: " << velMax << std::endl;
   std::cout << "Quantidade de Rodas: " << rodas << std::endl;
   std::cout << "Blindagem: " << blind << std::endl;
   std::cout << "Armamento: " << arma << std::endl;
}

class Carro:public Veiculo{
public:
   Carro();
};

Carro::Carro(){
   vel=0;
   blind=1;
   rodas=4;
   setTipo(2);
   setVelMax(260);
   setArma(true);
}

class Tanque:public Veiculo{
public:
   Tanque();
};

Tanque::Tanque(){
   vel=0;
   blind=1;
   rodas=8;
   setTipo(3);
   setVelMax(75);
   setArma(true);
}

#endif
