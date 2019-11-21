#include<iostream>
#include<vector>

using namespace std;

int main(){

auto maior=[](int n1, int n2)->int{
   return (n1>n2)?n1:n2;
};

cout << maior(33,32) << endl;

auto menor=[](vector<int>v)->int{
   auto me=1000;
   for(int x:v){
      me=(me<x)?me:x;
   }
   return me;
};

cout<< menor({4,16,65,34,66,2,62,74,36}) << endl;

int x1, x2, x3, x4;
x1=10;
x2=2;
x3=5;
x4=15;

auto soma=[x1,x2,x3,x4]()->int{
   return x1+x2+x3+x4;
};

cout << soma() << endl;

auto somaEscopo=[=]()->int{
   return x1+x2+x3+x4;
};

cout << somaEscopo() << endl;

auto somaVector=[](vector<int>ve)->int{
   auto s=0;
   for(int x:ve){
      s+=x;
   }
   return s;
};

cout << somaVector({1,2,4,5,23,12,41,14,75,23,64,43,74}) << endl;

return 0;
}
