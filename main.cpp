#include <iostream>
using namespace std;

int main(){
    int resposta;
    double numero1,numero2;
    cout<<"bem-vindo a calculadora, para comecar, digite o primeiro numero: ";
    cin>>numero1;
    cout<<"agora digite o segundo numero: ";
    cin>>numero2;
    cout<<"agora escolhar a operacacao a ser realizada entre os dois numeros: 1 para somar, 2 para subtrair, 3 para dividir, 4 para multiplicar: ";
    cin>>resposta;
    switch(resposta){
        case 1:
            cout<<"resultado da operacao: "<<numero1<<" + "<<numero2 << " = " <<numero1 + numero2 << endl;
            break;
        case 2:
            cout<<"resultado da operacao: "<<numero1<<" - "<<numero2 << " = " <<numero1 - numero2 << endl;
            break;
        case 3:
            if(numero2 == 0){
                cout<<"impossivel dividir por zero"<<endl;
            } else {
                cout<<"resultado da operacao: "<<numero1<<" / "<<numero2 << " = " <<numero1 / numero2 << endl;
            }
            break;
        case 4:
            cout<<"resultado da operacao: "<<numero1<<" * "<<numero2 << " = " <<numero1 * numero2 << endl;
            break;
        default:
            cout<<"opcao de operacao nao encontradar";
            break;
    }
    return 0;
}