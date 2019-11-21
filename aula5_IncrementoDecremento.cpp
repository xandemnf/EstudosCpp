#include <iostream>

using namespace std;

int main(){

int n1, n2;

n1 = 0;
n2 = 10;

cout << "O valor de n1 e: " << n1 << "\n\n";

//n1 = n1+1;
//n1 = n1+10;   n1+=10;
//n1 = n1-10;   n1-=10;
//n1 = n1*10;   n1+=10;
//n1 = n1/10;   n1/=10;
//n1 += 1;
n1++;

cout << "O valor de n1 incrementado e: " << n1 << "\n\n";

cout << "O valor de n2 e: " << n2 << "\n\n";

n2--;

cout << "O valor de n2 decrementado e: " << n2 << "\n\n";

cout << "O valor de n1 posIncrementado e: " << n1++ << "\n";
cout << "N1: " << n1 << "\n\n";

cout << "O valor de n1 preIncrementado e: " << ++n1 << "\n\n";


return 0;
}
