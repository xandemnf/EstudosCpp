#include <iostream>

using namespace std;

int main(){

int num;

   /*
   1 2 3 4 5 6 7 8 9 10
   >4 e <7
   */

   num=2;

   if(num > 4 && num < 7){
      cout << "Valor Aceito";
   }else{
      cout << "Valor nao aceito";
   }

   if(num < 3 || num > 9 ){
      cout << "\n\nValor Aceito\n";
   }else{
      cout << "\n\nValor nao aceito\n";
   }

   if( (num < 3 || num > 9) || (num > 1 && num >=2)) {
      cout << "\nValor Aceito\n";
   }else{
      cout << "\nValor nao aceito\n";
   }

   if(num != 2){
      cout << "\nNumero eh diferente de 2\n";
   }else{
      cout << "\nNumero eh igual a 2\n";
   }

return 0;
}
