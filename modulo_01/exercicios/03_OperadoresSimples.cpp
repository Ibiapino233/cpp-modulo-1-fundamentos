// Created by stalin on 14/12/2025.
#include <iostream>
#include "03_OperadoresSimples.h"

void operadoresSimples() {
    int a=0, b=0;

    std::cout<<"Digite o primeiro valor: "<< std::endl;
    std::cin>>a;
    std::cout<<"Digite o segundo valor: "<< std::endl;
    std::cin>>b;

    std::cout<<"Operações:"<< std::endl;
    std::cout << "\n--- Resultados ---\n";
    std::cout << "Soma: " << a + b << std::endl;
    std::cout << "Subtração: " << a - b << std::endl;
    std::cout << "Multiplicação: " << a * b << std::endl;

    if (b !=0) {
        std::cout << " O resultado da divisão é "<< a/b<< std::endl;
        std::cout<< "O resto é "<< a%b << std::endl;
    } else {
        std::cout<<"Valor inválido, b deve ser DIFERENTE DE ZERO." << std::endl;
    }
}