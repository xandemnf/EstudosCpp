#include<iostream>

using namespace std;

void somar(float *var, float valor);
void iniVetor(float *pnt);

int main(){

float num=0;
float vetor[5];

cout << num << "\n";

somar(&num, 20);

cout << num << "\n\n";

iniVetor(vetor); //Quando se trata de vetor nao precisa do &.

for(int i=0;i<5;i++){
   cout << vetor[i] << "\n";
}

return 0;
}

void somar(float *var, float valor){
   *var += valor;
}

void iniVetor(float *pnt){
   pnt[0] = 0;
   pnt[1] = 1;
   pnt[2] = 2;
   pnt[3] = 3;
   pnt[4] = 4;
}
