#include <iostream>

using namespace std;

int main(){

int n=0;

while(n++<10){
   cout << "Valor de N: " << n << "\n";
}

while(n!=0){
   cout << "Digite um valor para N: ";
   cin >> n;
   cout << "Valor digitado: " << n << "\n";
   if(n==7){
      break;
   }
}

return 0;
}
