#include<iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_ALL, "portuguese");
cout << setlocale(LC_ALL, NULL) << endl;
cout << "Agora n�o tem mais problema algum para utilizar acentua��o!\n";

return 0;
}
