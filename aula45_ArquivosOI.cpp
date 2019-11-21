#include<iostream>
#include<fstream>

using namespace std;

int main(){

//ofstream, ifstream, fstream;

ofstream arquivoO;

arquivoO.open("aula45_ArquivosIO.txt"/*, ios::app*/); //Posiciona o ponteiro no final do arquivo;
int i=0;
//do{
arquivoO << "Alexandre\n";
arquivoO << "Goncalves\n";
arquivoO << "Teixeira\n";
i++;
//}while(i<50);

arquivoO.close();

ifstream arquivoI;
string linha;
arquivoI.open("aula45_ArquivosIO.txt");
if(arquivoI.is_open()){
   while(getline(arquivoI, linha)){
      cout << linha << endl;
   }
   arquivoI.close();
}else{
   cout << "Nao foi possivel abrir o arquivo" << endl;
}

return 0;
}
