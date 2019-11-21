#include<iostream>
#include<vector>

using namespace std;

int main(){

vector<int> num1, num2;
int tam1, tam2, i;

num1.push_back(1);
num1.push_back(2);
num1.push_back(3);
num1.push_back(4);

num2.push_back(5);
num2.push_back(6);
num2.push_back(7);
num2.push_back(8);

tam1 = num1.size();
tam2 = num2.size();

cout << "Tamanho do Vector: " << tam1 << endl;

for(i=0;i<tam1;i++){
   cout << num1[i]<< "  ";
}
cout << endl;
for(i=0;i<tam2;i++){
   cout << num2[i]<< "  ";
}

cout << endl << endl;

num1.swap(num2);

for(i=0;i<tam1;i++){
   cout << num1[i]<< "  ";
}
cout << endl;
for(i=0;i<tam2;i++){
   cout << num2[i]<< "  ";
}

num2.swap(num1);

cout << endl << endl;
cout << "Primeiro valor de NUM: " << num1.front() << endl;
cout << "Ultimo valor de NUM: " << num1.back() << endl;
cout << "Valor do meio de NUM: " << num1.at(tam1/2) << endl;

num1.insert(num1.begin(), 13);

cout << endl;

for(i=0;i<num1.size();i++){
   cout << num1[i] << "  ";
}

cout << endl;

num1.insert(num1.begin()+2, 18);
num1.insert(num1.end()-1, 33);
num1.erase(num1.end()-3);

cout << endl;

for(i=0;i<num1.size();i++){
   cout << num1[i] << "  ";
}

cout << endl;

while(!num1.empty()){
   num1.pop_back();
}

cout << "\nTamanho de NUM1: " << num1.size() << endl;

return 0;
}
