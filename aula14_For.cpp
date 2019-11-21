#include <iostream>

using namespace std;

int main(){

int x,y,z;

for(x=0;x<=10;x++){
   cout << "X vale: " << x << "\n";
}

for(x=0,y=1,z=0; y<=10; x++, y+=2, z+=3){
   cout << "O valor de X: " << x << "\n";
   cout << "O valor de Y: " << y << "\n";
   cout << "O valor de Z: " << z << "\n\n";
}

for(int tmp=0; tmp < 10000000; tmp++)

return 0;
}
