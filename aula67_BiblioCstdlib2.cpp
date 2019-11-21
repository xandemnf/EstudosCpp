#include<iostream>
#include<cstdlib>


using namespace std;

void fim(){
   cout << "Alexandre";
}

int comparacao(const void *a, const void *b){
   return (*(int*)a - (*(int*)b));
   // 0   -> a = b
   // >0  -> a > b
   // <0  -> a < b
}

int comparacao2(const void *a, const void *b){
   return (*(int*)a - (*(int*)b));
   // 0   -> a = b
   // >0  -> a > b
   // <0  -> a < b
}

int main(){

   atexit(fim); //Chama a fun��o no final da execu��o do programa
   //at_quick_exit(fim) roda como sendo a mesma coisa do atexit

   for(int i=0;i<10;i++){
      if(i<5){
         cout << i << endl;
      }else{
         //exit(EXIT_SUCCESS);
         //quick_exit(EXIT_SUCCESS) roda como sendo a mesma coisa do exit
         //EXIT_SUCCESS retorna 0;
         //EXIT_FAILURE retorna 1;
         //_Exit(EXIT_SUCCESS); //C++11
         cout << i << endl;
      }
   }

   cout << endl;

   const char *p;

   p=getenv("PATH");

   cout << p << endl << endl;

   const char *a = "Alexandre G.";

   system("cls");
   system("dir");
   cout << a << endl << endl;
   //system("pause");

   int vetor[]={7,2,6,4,9,0,1,3,8,5};
   int pesquisa=7;
   int *pos, *pos2;

   // pos2 = (int*)bsearch(&pesquisa, vetor, 10, sizeof(int), comparacao2);
   // cout << "O Elemento " << pesquisa << " esta na posicao: " << *pos2 << endl << endl;
   //O Bsearch parece funcionar apenas após a ordenação do qsort

   qsort(vetor, 10, sizeof(int),comparacao);

   for(int i=0;i<10;i++){
       cout << vetor[i] << endl;
   }

   pos = (int*)bsearch(&pesquisa, vetor, 10, sizeof(int), comparacao);

   cout << "O Elemento " << pesquisa << " apos odenacao esta na posicao: " << *pos << endl << endl;

return 0;
}
