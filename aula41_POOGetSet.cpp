#include<iostream>
#include "aula41_POOGetSet.h"

using namespace std;

int main(){
 
Veiculo *v1 = new Veiculo(1);
Veiculo *v2 = new Veiculo(2);
Veiculo *v3 = new Veiculo(3);

v1->setEstado(1);
v2->setEstado(0);
v3->setEstado(1);

//v1->setVelMax(1800);

cout << v1->getVelMax() << endl;
cout << v2->getVelMax() << endl;
cout << v3->getVelMax() << endl;

cout << v1->getEstado() << endl;
cout << v2->getEstado() << endl;
cout << v3->getEstado() << endl;



//v1->velMax = 300;

return 0;
}
