#include <iostream>

int main(){
    int resposta;
    double numero1,numero2;
    do{
        std::cout<<"bem-vindo a calculadora, agora escolhar a operacacao a ser realizada: 0 para fechar a calculadora 1 para somar, 2 para subtrair, 3 para dividir, 4 para multiplicar: ";
        std::cin>>resposta;
        switch(resposta){
            case 0:
                std::cout<<"fechando a calculadora..."<<std::endl;
                break;
            case 1:
                std::cout<<"informe o valor do primeiro numero: ";
                std::cin>>numero1;
                std::cout<<"agora informe o segundo numero: ";
                std::cin>>numero2;
                std::cout<<"resultado da operacao: "<<numero1<<" + "<<numero2 << " = " <<numero1 + numero2 << std::endl;
                break;
            case 2:
                std::cout<<"informe o valor do primeiro numero: ";
                std::cin>>numero1;
                std::cout<<"agora informe o segundo numero: ";
                std::cin>>numero2;
                std::cout<<"resultado da operacao: "<<numero1<<" - "<<numero2 << " = " <<numero1 - numero2 << std::endl;
                break;
            case 3:
                std::cout<<"informe o valor do primeiro numero: ";
                std::cin>>numero1;
                std::cout<<"agora informe o segundo numero: ";
                std::cin>>numero2;
                if(numero2 == 0){
                    std::cout<<"impossivel dividir por zero"<<std::endl;
                } else {
                    std::cout<<"resultado da operacao: "<<numero1<<" / "<<numero2 << " = " <<numero1 / numero2 << std::endl;
                }
                break;
            case 4:
                std::cout<<"informe o valor do primeiro numero: ";
                std::cin>>numero1;
                std::cout<<"agora informe o segundo numero: ";
                std::cin>>numero2;
                std::cout<<"resultado da operacao: "<<numero1<<" * "<<numero2 << " = " <<numero1 * numero2 << std::endl;
                break;
            default:
                std::cout<<"opcao de operacao nao encontradar"<<std::endl;
                break;
            }
        if(resposta != 0)
            std::cout<<"realizando outra operacão..."<<std::endl;
    } while(resposta != 0);
    return 0;
}