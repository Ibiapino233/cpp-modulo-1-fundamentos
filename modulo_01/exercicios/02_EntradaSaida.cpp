//
// Created by stalin on 14/12/2025.
#include <iostream>
#include "02_EntradaSaida.h"

void entradaSaida() {
    int idade=0;
    double altura=0;
    char inicial=0;
    bool aprovado;

    std::cout << "Digite sua idade" << std::endl;
    std::cin >> idade;
    std::cout << "Digite sua altura" << std::endl;
    std::cin >> altura;
    std::cout << "Inicial do seu nome  " << std::endl;
    std::cin >> inicial;
    std::cout<<"Aprovado? true or False."<< std::endl;
    std::cin>>aprovado;

    // Vamos as saídas:
    std::cout << "\n--- Dados informados ---\n";
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Altura: " << altura << std::endl;
    std::cout << "Inicial: " << inicial << std::endl;
    std::cout << "Aprovado: " << aprovado << std::endl;


}