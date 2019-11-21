#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){

map<int, string>prod;

prod[0]="Mouse";
prod[1]="Teclado";
prod[2]="Monitor";
prod[3]="Caixa de Som";

for(auto it=prod.begin();it!=prod.end();it++){
   cout << it->first << " - " << it->second << endl;
}
cout<<endl;
for(auto x:prod){
   cout << x.first << " - " << x.second << endl;
}

prod.insert(pair<int, string>(4,"Novo Item"));
prod.insert(pair<int, string>(5,"Outro Item"));

cout<<endl;
for(auto x:prod){
   cout << x.first << " - " << x.second << endl;
}

prod.erase(2);
prod.erase(4);

cout<<endl;
for(auto x:prod){
   cout << x.first << " - " << x.second << endl;
}

map<int, string>::iterator itmap;
itmap=prod.find(5);

if(itmap==prod.end()){
   cout << "\nProduto nao encontrado";
}else{
   cout << "\nProduto em estoque" << endl;
   cout << "Codigo: " << itmap->first << "\nDescricao: " << itmap->second<< endl;
}

prod.erase(prod.begin(), prod.find(3));

cout<<endl;
for(auto x:prod){
   cout << x.first << " - " << x.second << endl;
}

prod.clear(); //Limpa todos os Elementos

cout<<endl;
int a=1;
for(auto x:prod){
   cout << x.first << " - " << x.second << endl;
}

return 0;
}
