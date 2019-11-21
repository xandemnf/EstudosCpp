#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo{
public:
   int vel;
   int tipo;
   Veiculo(int tp);
   int getVelMax();
   bool getEstado();
   void setEstado(int e);

private:
   std::string nome; 
   void setVelMax(int vm);
   bool estado;
   int velMax;

};

Veiculo::Veiculo(int tp){ //1=Carro; 2=Aviao; 3=Navio
   tipo = tp;
   if(tipo==1){
      nome = "Carro";
      velMax=200;
   }else if(tipo==2){
      nome= "Aviao";
      velMax=800;
   }else if(tipo==3){
      nome= "Navio";
      velMax=120;
   }
} 

int Veiculo::getVelMax(){
   return velMax;
}

void Veiculo::setVelMax(int vm){
   velMax=vm;
}

bool Veiculo::getEstado(){
   return estado;
}

void Veiculo::setEstado(int e){
   if(e==1){
      estado=true;
   }else if(e==0){
      estado=false;
   }
}

#endif // VEICULO_H_INCLUDED
