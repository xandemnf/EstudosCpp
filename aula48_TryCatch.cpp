#include<iostream>
#include<vector>
#include<stdexcept>

using namespace std;

double divide(double, double);

int main(){

vector<int>num(5);
double n1, n2;


num.at(0)=10;

cout << num[0] << endl;

try{
   num.at(5)=20;
}catch(exception &e){
   cout << "ERRO: " << e.what() << endl;
}

cout << "Digite um numero: \n";
cin >> n1;
cout << "Digite outro numero: \n";
cin >> n2;

try{
   cout << divide(n1,n2);
}catch(const char *e){
   cout << e << endl;
}

return 0;
}

double divide(double n1, double n2){
   if(n2==0){
      throw "ERRO: Divisao por 0\n";
   }
   if(n2>=10){
      throw "ERRO: N1 precisa ser menor ou igual a 10";
   }
   return n1/n2;
}
