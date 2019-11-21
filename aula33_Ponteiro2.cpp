#include<iostream>

using namespace std;

int main(){

int *p;
int vetor[10];

p = vetor; //p = &vetor[0]; Mesma coisa
cout << p << "\n";

p = &vetor[1];
cout << p << "\n";

p = &vetor[2];
cout << p << "\n";

*(p+=1);
cout << p << "\n";

*p++;
cout << p << "\n\n";

p = vetor;
*p=10; //vetor[0] = 10;
cout << p << "\n";
cout << *p << "\n\n";

*p++;
*p=20; //vetor[1] = 20;
cout << p << "\n";
cout << *p << "\n\n";

*p++;
*p=30; //vetor[2] = 30;
cout << p << "\n";
cout << *p << "\n\n";



return 0;
}
