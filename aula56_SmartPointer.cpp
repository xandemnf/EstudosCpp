#include<iostream>
#include<memory>

using namespace std;

class Carro{
public:
   int vel=0;
   int getVel(){
      return vel;
   }
   void setVel(int v){
      this->vel=v;
   }
};

int main(){

int *pnum;
int num;
int *pnum2;

num=10;
pnum=&num;

//*pnum2=20;

//cout << *pnum << " - " << pnum << endl;
//cout << *pnum2 << " - " << pnum2 << endl;

delete pnum;
delete pnum2;

unique_ptr<int>pont(new int);
*pont=90;
cout << *pont << " - " << &pont << endl;

//PONTEIRO COMUM
/*string *str=new string("Alexandre");
cout << *str << " - " << str->size() << endl;
delete str;*/

//SMART POINTER
unique_ptr<string>strSmart(new string("Alexandre Lindao"));
cout << *strSmart << " - tamanho: " << strSmart->size() << endl;

//PONTEIRO COMUM
Carro *c1=new Carro();
c1->setVel(10);
cout << "Velocidade: " << c1->getVel() << endl;
delete c1;

//SMART POINTER
unique_ptr<Carro>c2(new Carro);
c2->setVel(20);
cout << "Velocidade: " << c2->getVel() << endl;

return 0;
}
