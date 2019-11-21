#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main(){

pair<int,string>par(27, "Alexandre");

cout << par.first << " - " << par.second << endl;

par.first=20;
par.second="Gustavo";

cout << par.first << " - " << par.second << endl;

const int tam=3;
pair<int, string>par2[tam];

par2[0].first=1;
par2[0].second="Um";
par2[1].first=2;
par2[1].second="Dois";
par2[2]=make_pair(3, "Tres");//MakePair, nome Intuitivo

for(int i=0;i<tam;i++){
   cout << par2[i].second << " - " << par2[i].first << endl;
}

pair<int, pair<string, double>>prod[tam];
prod[0]=make_pair(10,make_pair("Mouse", 119.99));
prod[1]=make_pair(20,make_pair("Teclado", 150.00));
prod[2]=make_pair(30,make_pair("CPU", 750.00));

for(int i=0;i<tam;i++){
   cout << prod[i].first << " - " << prod[i].second.first << " - " << prod[i].second.second << endl;
}

vector<pair<int,string>>produtos;

produtos.push_back(make_pair(1, "Bolo no Pote"));
produtos.push_back(make_pair(2, "Bombom com Morango"));
produtos.push_back(make_pair(3, "Torta Holandesa"));
cout << endl;
for(int i=0;i<tam;i++){
   cout << produtos[i].first << " - " << produtos[i].second << endl;
}
cout << endl;
for(auto i:produtos){
    cout << i.first << " - " << i.second << endl;
}

return 0;
}
