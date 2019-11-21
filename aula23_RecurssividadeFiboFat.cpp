#include<iostream>

using namespace std;

int fat(int i);
int fibo(int n);


int main(int argc, char *argv[]){


cout << fat(5) << "\n";

cout << fibo(63) << "\n";

return 0;
}

//8! = 8*7*6*5*4*3*2*1*(1)
int fat(int i){
   if(i==0){
      return 1;
   }
   return i*fat(i-1);
}

//0,1,1,2,3,5,8,13,21,34,55...
int fibo(int n){
   if(n==1){
      return 0;
   }else if(n==2 || n==3){
      return 1;
   }else{
      return fibo(n-1)+fibo(n-2);
   }
}
