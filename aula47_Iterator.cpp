#include<iostream>
#include<vector>

using namespace std;

int main(){

vector<string>produtos={"0 - mouse","1 - teclado", "2 - mousepad","3 - monitor","4 - gabinete"};
vector<string>::iterator it; //Posso declarar direto no FOR

//cout << produtos[0] << endl;

it=produtos.end()-1;

cout << *it << endl;

it=produtos.begin();

cout << *it << endl;

//advance
//next
//prev

advance(it,2);

cout << *it << endl;

advance(it,1);

cout << *it << endl;

cout << *next(it,1) << endl;

//cout << *prev(it,4) << endl; //BUG
cout << *prev(it,3) << endl << endl;

for(vector<string>::iterator it=produtos.begin();it!=produtos.end();it++){
   cout << *it << endl;
}




return 0;
}
