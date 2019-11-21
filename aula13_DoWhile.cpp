#include<iostream>

using namespace std;

int main(){

int cont=19;

while(cont++<20){
   cout << "Alexandre Lindao\n";
}

//cout << cont << "\n";

do{
   cout << "Alexandre Lindao " << cont << "\n";
   if(cont==1) break;
}while(--cont<=20);

return 0;
}
