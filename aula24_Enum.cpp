#include<iostream>

using namespace std;

int main(int argc, char *argv[]){

enum armas{fuzil=100, revolver, rifle, escopeta};

armas armaSel; //Variavel armaSel � do tipo armas;

armaSel = revolver;

cout << armaSel;

return 0;
}
