#include<iostream>
#include<string.h>

using namespace std;

int main(int argc, char *argv[]){

if(argc>1){
   if(!strcmp(argv[1], "sol")){
      cout << "Vou ao clube.\n\n";
   }else if(!strcmp(argv[1], "nublado")){
      cout << "Vou ao cinema\n";
   }
}

if(argc >= 1){
   for(int i=0;i<=argc;i++){
      cout << argv[i] << "\n";
   }
}

return 0;
}
