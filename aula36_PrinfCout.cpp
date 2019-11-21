#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>

#define M_PI 3.14
using namespace std;

int main(){

float pi=M_PI;
int num=5;

printf("Valor de PI: %.2f\n", pi);
printf("Valor de NUM: %07d\n", num);

int num2=15;

cout << "Valor de NUM2: " << num2 << "\n";
cout << "Valor de NUM2: " << hex << num2 << "\n";
cout << "Valor de NUM2: " << oct << num2 << "\n";
cout << "Valor de NUM2: " << dec << num2 << "\n";
cout << "Valor de NUM2: " << setbase(16) << num2 << "\n";

cout << "Valor de PI: " << pi << "\n";
cout.precision(3);
cout << "Valor de PI: " << pi << "\n";
cout.precision(30);
cout << "Valor de PI: " << pi << "\n";
cout.precision(-1);
cout << "Valor de PI: " << pi << "\n\n";
cout.precision(10);
cout << "Valor de PI: " << std::scientific << pi << "\n";
cout.precision(-1);

int number=10;
cout << "Valor de number: " << number << "\n";
cout << "Valor de number: " << setw(5) << setfill('x') << number << "\n";



return 0;
}
