#include <iostream>

using namespace std;

int main(){

int num;

cout << "Selecione uma cor:\n[1]-Vermelho\n[2]-Amarelho\n[3]-Azul\n[4]-Verde\n";
cin >> num;

   switch(num){
      case 1:
         cout << "Cor selecionada: Vermelho\n";
         break;
      case 2:
         cout << "Cor selecionada: Amarelo\n";
         break;
      case 3:
         cout << "Cor selecionada: Azul\n";
         break;
      case 4:
         cout << "Cor selecionada: Verde\n";
      default:
         cout << "Cor selecionada nao eh valida\n";
      }

//Switch Alinhado
int trans;
cout << "Selecione um veiculo:\n[1]-Carro\n[2]-Moto\n[3]-Aviao\n[4]-Helicoptero\n";
cin >> trans;

   switch(trans){
      case 1:
      case 2:
            cout << "Transporte Terrestre selecionado.\n";
         switch(trans){
            case 1:
               cout << "Carro Selecionado";
               break;
            case 2:
               cout << "Moto Selecionado";
               break;
         }
         break;

      case 3:
      case 4:
         cout << "Transporte Aereo Selecionado\n";
         switch(trans){
            case 3:
               cout << "Aviao Selecionado\n";
               break;
            case 4:
               cout << "Helicoptero Selecionado\n";
               break;
         }
       default:
         cout << "Opcao invalida para Transporte\n";
   }


return 0;
}
