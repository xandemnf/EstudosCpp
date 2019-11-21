#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int soma(int n1, int n2){
   return n1+n2;
}

string imp(){
   return "Lindao Gostosudo";
}

auto somaAuto(double n1, double n2)->double{
   return n1+n2;
}

void somador(){
   auto i=0; //Inicializa uma variavel I em uma posicao de memoria toda vez que chamado
   i++;
   cout << i << endl;
}

void somadorStatic(){
   static auto i=0; //Utiliza uma variavel statica numa posicao de memoria;
   i++;
   cout << i << endl;
}

int main(){

auto num=10;
auto nome="Alexandre ";
auto valor=10.5;
vector<int>v{10,20,30,40,50,60};

vector<int>v2{10,20,30,40,50,60};

reverse(v2.begin(), v2.end()); //Precisa do #include<algorithm>


auto res = imp();

cout << nome << res << endl;
cout << valor << endl;
cout << soma(5,5) << endl;

cout << somaAuto(4.6,12.3);

for(vector<int>::iterator it=v.begin()-1;it!=v.end();it++){
   cout << *it << endl;
}

cout << endl;

for(auto it=v2.begin();it!=v2.end();it++){
   cout << *it << endl;
}

register int cont;

for(cont=0;cont<=10;cont++){
   cout << cont << endl;
}

cout << endl;

somador();
somador();

cout << endl;

somadorStatic();
somadorStatic();


return 0;
}
