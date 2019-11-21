#include<iostream>

using namespace std;

void imp(string txt="");

int main(int argc, char *argv[]){

imp("Alexandre");
imp();
imp("Linha de cima esta vazia por conta do default");

return 0;
}

void imp(string txt){
   cout << txt << "\n";
}
