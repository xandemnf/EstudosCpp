#include<iostream>
#include<vector>
#include<map>
#include<exception>

using namespace std;

struct Pessoa{
   string nome;
   int idade;
};

class Veiculo{
public:
   int tipo;
   string nome;
   /*Veiculo(int tp, string nm){
      tipo = tp;
      nome = nm;
   } */
};

int main(){

int num{10};
string nome{"Alexandre"};
vector<int>valores{1,2,3,4,5};
map<string,string>capitais{{"DF", "Brasilia"}};
int vetor[]{6,7,8,9,0};

Pessoa p1{"Alexandre", 27};
Pessoa p2{"Jailson", 36};

Veiculo v1{1, "Carango"};

cout << num << endl;
cout << nome << endl;
for(vector<int>::iterator it=valores.begin();it!=valores.end();it++){
  cout << *it << endl;
}

for(map<string,string>::iterator ite=capitais.begin();ite!=capitais.end();ite++){
   cout << ite->first << " - " << ite->second << endl;
}

cout << "Nome: "<< p1.nome << " - " << p1.idade << endl;
cout << "Nome: "<< v1.nome << " - " << v1.tipo << endl;

cout << vetor[3] << endl;


return 0;
}
