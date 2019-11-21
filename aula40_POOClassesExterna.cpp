#include<iostream>
#include "aula40_POOClassesExterna.h"

using namespace std;

int main(){

Aviao *av1 = new Aviao(1);
Aviao *av2 = new Aviao(2);
Aviao *av3 = new Aviao(3);

av1->imp();
av2->imp();
av3->imp();


return 0;
}
