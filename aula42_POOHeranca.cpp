#include<iostream>
#include "aula42_POOHeranca.h"

using namespace std;

int main(){

Moto *m1 = new Moto();

m1->imp();

cout << endl;

Carro *c1 = new Carro();

c1->imp();

cout << endl;

Tanque *t1 = new Tanque();

t1->imp();

return 0;
}
