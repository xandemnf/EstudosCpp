#include <iostream>

using namespace std;

int main(){

int matriz[3][3];
int l,c;

/*for(x=0;x<3;x++){
   matriz[x][y] = x;
   for(y=0;y<3;++y){
      matriz[x][y] = x+y;
   }
}

*/

matriz[0][0] = 0;
matriz[0][1] = 1;
matriz[0][2] = 2;

matriz[1][0] = 3;
matriz[1][1] = 4;
matriz[1][2] = 5;

matriz[2][0] = 6;
matriz[2][1] = 7;
matriz[2][2] = 8;

for(l=0;l<3;l++){
   for(c=0;c<3;c++){
      cout << matriz[l][c] << "  ";
   }
   cout << "\n";
}

cout << "\n";

int matriz2[10][10];

for(l=0;l<10;l++){
   for(c=0;c<10;c++){
      matriz[l][c] = c+l;
   }
}

for(l=0;l<10;l++){
   for(c=0;c<10;c++){
      cout << matriz[l][c] << "    ";
   }
   cout << "\n";
}


return 0;
}
