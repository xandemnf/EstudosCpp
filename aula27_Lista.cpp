#include <iostream>
#include <list>

using namespace std;

int main(int agrc, char *argv[]){

list <int> aula;
list<int>::iterator it;

int tam =10;

for(int i=0;i<tam;i++){
   aula.push_front(i);
}

cout << "Tamanho da Lista: " << aula.size() << "\n\n";

it = aula.begin();
advance(it,5);
aula.insert(it,0);

tam = aula.size();

cout << "\nTamanho da nova lista: " << aula.size() << "\n";

for(int i=0;i<tam;i++){
   cout << aula.front() << "\n";
   aula.pop_front();
}

cout << "\nTamanho da nova lista: " << aula.size() << "\n";

aula.push_front(16);
aula.push_front(6);
aula.push_front(23);
aula.push_front(41);
aula.push_front(5);

aula.sort();
tam = aula.size();

for(int i=0;i<tam;i++){
   cout << aula.front() << "\n";
   aula.pop_front();
}

aula.push_front(16);
aula.push_front(6);
aula.push_front(23);
aula.push_front(41);
aula.push_front(5);

aula.sort();
aula.reverse();
cout << "\n";

for(int i=0;i<tam;i++){
   cout << aula.front() << "\n";
   aula.pop_front();
}

cout << "\n";

return 0;
}
