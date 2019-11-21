#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){

fstream arquivo;
char opc='n';
string nome;

arquivo.open("aula46_ArquivosF.txt", ios::out/*|ios:app*/); //ios:append (mescla conteudo novo com o existente)

while((opc=='n')||(opc=='n')){
   cout << "Digite um nome: ";
   cin >> nome;
   arquivo << nome << "\n";
   cout << "Deseja Sair? [s/n]";
   cin >> opc;
   system("cls");
}

arquivo.close();

string linha;

arquivo.open("Aula46_ArquivosF.txt", ios::in);

cout << "Nomes Digitados: " << endl;

if(arquivo.is_open()){
   while(getline(arquivo, linha)){
      cout << linha << endl;
   }
   arquivo.close();
}else{
   cout << "Falha na abertura do arquivo";
}

return 0;
}
