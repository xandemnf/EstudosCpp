#include <iostream>
#include <list>

using namespace std;

int main(int agrc, char *argv[]){

list <int> aula, testeMerge, mergee;
list<int>::iterator it;
int tam =10;

for(int i=0;i<tam;i++){
   aula.push_front(i);
   testeMerge.push_front(i*2);
}

it = aula.begin();
advance(it, 5);
aula.insert(it, 43);
aula.erase(--it); //Remore o elemento dps do ponto marcado, por isso o decremento
//aula.clear(); //Limpa toda a Lista

cout << "Tamanho da Lista: " << aula.size() << "\n";
tam = aula.size();

for(int i=0;i<tam;i++){
   cout << aula.front() << "\n";
   aula.pop_front();
}

cout << "\n";

for(int i=0;i<tam;i++){
   cout << testeMerge.front() << "\n";
   testeMerge.pop_front();
}

for(int i=0;i<tam;i++){
   aula.push_front(i);
   testeMerge.push_front(i*2);
}

mergee.merge(aula);
mergee.merge(testeMerge);
tam = mergee.size();
cout << "Tamanho da Lista Mergee: " << mergee.size() << "\n";

mergee.sort();

for(int i=0;i<tam;i++){
   cout << mergee.front() << "\n";
   mergee.pop_front();
}

return 0;
}
