#include<iostream>
#include<vector>

using namespace std;

int main(){

int x[10]{0,1,2,3,4,5,6,7,8,9};
vector<int>n{10,20,30,40,50,60,70,80,90};

//for(int i=0;i<sizeof(x)/4;i++){
//   cout << x[i] << endl;
//}

cout << endl;

for(int i:x){
   cout << i << endl;
}

cout << endl;

for(auto i:n){
   cout << i << endl;
}

const char *nome="Alex";

for(int i=0;i<sizeof(nome);i++){
   cout << nome[i];
}


}
