#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

vector<int>n{10,20,30,40,50};
vector<int>::iterator it;

for(it=n.begin();it!=n.end();it++){
   cout << *it << endl;
}

cout << endl;
for(auto it2=n.begin();it2!=n.end();it2++){
   cout << *it2 << endl;
}

cout << endl;
for(auto x:n){
   cout << x << endl;
}

cout << endl;
//3 Parametros. (Inicio, Fim, Função (geralmente lambda))
for_each(n.begin(),n.end(),[](int num){cout<<num<<endl;});

cout << endl;
for_each(n.begin(),n.end(),[](int num){
         num+=5;
         cout<<num<<endl;
      });




return 0;
}
