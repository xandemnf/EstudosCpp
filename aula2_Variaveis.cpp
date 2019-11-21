#include<iostream>

using namespace std;

int main(){
	
//Comentário

	int numero = 0;             //Numeros inteiros
	char letra = 'A';           //'a', 'b', 'c'
	float decimal1 = 1.56; 	    //Numeros reais
	double decimal2 = 18.23; 	//Numeros reais com maior precisao
	bool VouF = true; 			//Verdadeiro (1/True) ou Falso (0/False)     
	string nome = "Alexandre";  //Cadeia de caracteres
		
	cout << numero << "\n";
	cout << letra << "\n";
	cout << decimal1 << "\n";
	cout << decimal2 << "\n";
	cout << VouF << "\n";
	cout << nome << "\n\n";
	
	cout << "Digite um numero:";
	cin >> numero;
	cout << "Digite uma letra:";
	cin >> letra;
	cout << "Digite seu money RS:";
	cin >> decimal1;
	cout << "Digite um nome:";
	cin >> nome;	
	
	cout << "\n";
	
	cout << numero << "\n";
	cout << letra << "\n";
	cout << decimal1 << "\n";
	cout << nome << "\n\n";
	

	return 0;
}

