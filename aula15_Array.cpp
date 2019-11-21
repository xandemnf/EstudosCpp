#include<iostream>

using namespace std;

int main(){

int vetor[5];

vetor[0]=10;
vetor[1]=20;
vetor[2]=30;
vetor[3]=40;
vetor[4]=50;

for(int i=0;i<5;i++){
   cout << "Vetor na posicao " << i << " eh: " << vetor[i] << "\n";
}

cout << "\n";

int vetor2[]={10,20,30,40,50,60,70};

cout << sizeof(vetor2) << "\n\n";  //retora o numero de bytes da variavel

for(int i=0;i<sizeof(vetor2)/4;i++){
   cout << "Vetor na posicao " << i << " eh: " << vetor2[i] << "\n";
}

return 0;
}
