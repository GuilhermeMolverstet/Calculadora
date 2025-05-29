#include <iostream>
#include <iostream>
#include <iomanip>
#include <string>

int main(){
    
    int num1, num2, soma, sub, multi, div;
    
    std::cout << "Bem-Vindo a Calculadora Universal" << '\n';
    std::cout << '\n';

    std::cout << "Escolha o Primero Numero:  " << '\n';
    std::cin >> num1;
    std::cout << "Escolha o Segundo Numero:  " << '\n';
    std::cin >> num2;

    
//Operações
    soma    = num1 + num2;
    sub     = num1 - num2;
    multi   = num1 * num2;
    div     = num1 / num2;

    std::cout << "Resultado Soma:  " << soma << '\n';
    std::cout << "Resultado subtracao:  " << sub << '\n';
    std::cout << "Resultado multiplicacao:  " << multi << '\n';
    std::cout << "Resultado divisao:  " << div << '\n';


    return 0;

}



