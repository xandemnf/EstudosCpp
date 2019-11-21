#include<iostream>

using namespace std;

void texto();
void soma(int n1, int n2);
int soma2(int x1, int x2);
void tr(string tra[4]);

int main(int argc, char *argv[]){

   string transp[4]={"carro","moto", "barco", "aviao"};

   for(int i=0;i<3;i++){
      texto();
   }

   soma(5,10);

   int x = soma2(3,4);
   cout << x << "\n";

   tr(transp);

return 0;
}

void texto(){
   cout << "Alexandre Goncalves\n";
}

void soma(int n1, int n2){
   cout << n1+n2 << "\n";
}

int soma2(int x1, int x2){
   return x1+x2;
}

void tr(string tr[4]){
   for(int i=0;i<4;i++){
      cout << tr[i] << "\n";
   }
}
