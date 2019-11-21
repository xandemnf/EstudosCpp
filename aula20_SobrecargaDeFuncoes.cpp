#include <iostream>

using namespace std;

void soma();
void soma(int x, int y);

int main(int argc, char *argv[]){

   soma();
   soma(90,20);

return 0;
}

void soma(){
   int n1, n2, re;
   n1 = 10;
   n2 = 20;
   re = n1+n2;
   cout << "Soma de " << n1 << " + " << n2 << " = " << re << "\n";
}

void soma(int x, int y){
   int re = x+y;
   cout << "Soma de " << x << " + " << y << " = " << re << "\n";
}
