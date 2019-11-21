#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<map>

using namespace std;


int main(){

int vetor[]={5,3,1,4,7,2,6,};
int *p;
size_t tam = sizeof vetor/4;


p=find(vetor, vetor+tam, 6);

if(p!=vetor+tam){
   cout << "Numero encontrado\n\n";
}else{
   cout << "Numero NAO encontrado\n\n";
}

vector<int> numeros={5,3,1,4,7,2,6,};
auto it = find(numeros.begin(), numeros.end(), 20);

if(it!=numeros.end()){
   cout << "Numero encontrado\n\n";
}else{
   cout << "Numero NAO encontrado\n\n";
}

list<int> numI={5,3,1,4,7,2,6,};
auto ite = find(numI.begin(), numI.end(), 10);

if(ite!=numI.end()){
   cout << "Numero encontrado\n\n";
}else{
   cout << "Numero NAO encontrado\n\n";
}

vector<int>numInt;
vector<int>::iterator it2;
int num, qntd=/*10*/0;

while(qntd>0){
   cout << "Digite um numero: ";
   cin >> num;
   it2 = find(numInt.begin(), numInt.end(), num);
   if(it2!=numInt.end()){
      cout << "Esse numero ja existe no vector\n";
   }else{
      numInt.push_back(num);
      qntd--;
   }
}

cout << endl;

map<char, int>mapa;
mapa['a']=10;
mapa['b']=20;
mapa['c']=30;
mapa['d']=40;
mapa['e']=50;

auto it3 = mapa.find('c');

if(it3!=mapa.end()){
   cout << "Chave Encontrada: " << it3->second << endl << endl;
}else{
   cout << "Chave nao encontrada\n";
}

string xandao = "Xande lindo, gostoso, pirocudo!";
size_t encontrado = xandao.find("pirocudo");
if(encontrado!=string::npos){
   cout << "Palavra Encontrada na posicao: " << encontrado << endl;
}else{
   cout << "Palavra nao encontrada\n";
}

size_t tamanho = xandao.size();
cout << endl << tamanho << endl;



return 0;
}
