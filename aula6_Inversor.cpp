#include <iostream>

using namespace std;

int main(){

int i=10;

cout << "O valor de i e: " << i << "\n\n";

//i = i*(-1);

cout << "O valor de i invertido MOMENTANEAMENTE e: " << -i << "\n\n";

cout << "O valor de i e: " << i << "\n\n";

i=-i;

cout << "O valor de i invertido PERMANENTEMENTE e: " << i << "\n\n";


return 0;
}
