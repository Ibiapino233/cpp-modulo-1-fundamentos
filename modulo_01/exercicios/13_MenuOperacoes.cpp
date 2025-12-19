// Created by stalin on 17/12/2025.
/*
Desafio 13 – Menu de Operações (Refatorado)

Enunciado:
Escreva um algoritmo que apresente um menu de opções para o usuário
realizar operações aritméticas básicas entre dois números.

Objetivo:
- Consolidar o uso de menu com switch
- Integrar entrada, processamento e saída
- Organizar o código de forma clara e segura

Contexto:
Menus são comuns em sistemas reais, aplicações de linha de comando,
jogos e ferramentas administrativas. Um menu mal implementado gera
erros, confusão e comportamento inesperado.

Requisitos:
- Apresentar um menu com opções de operações
- Ler a opção escolhida pelo usuário
- Ler dois números
- Executar a operação correspondente
- Exibir o resultado de forma clara

Preocupações de segurança e qualidade:
- Validar a opção escolhida
- Evitar divisão por zero
- Produzir mensagens claras para cada caso
- Tornar o fluxo do programa fácil de entender
*/
#include <iostream>
#include <iomanip>
#include "13_MenuOperacoes.h"
void menuOperacoes() {
    int opcao = 0;
    double a = 0.0;
    double b = 0.0;

    std::cout << "===== MENU DE OPERACOES =====\n";
    std::cout << "1 - Soma\n";
    std::cout << "2 - Subtração\n";
    std::cout << "3 - Multiplicação\n";
    std::cout << "4 - Divisão\n";
    std::cout << "Escolha uma opção: ";
    std::cin >> opcao;

    if (opcao < 1 || opcao > 4) {
        std::cout << "Opção inválida.\n";
        return;
    }

    std::cout << "Digite o primeiro número: ";
    std::cin >> a;

    std::cout << "Digite o segundo número: ";
    std::cin >> b;                                          //break -->sai de um laço ou switch.
                                                            //return--> sai da função.
    std::cout << std::fixed << std::setprecision(2);

    switch (opcao) {
        case 1:
            std::cout<<"Opção: SOMA ESCOLHIDA\n";
            std::cout<<"Resultado da soma de " <<a<< " + "<<b<< " é " << (a + b) << "\n";
            break;

        case 2:
            std::cout<<"Opção: SUBTRAÇÃO ESCOLHIDA\n";
            std::cout << "Resultado da subtração: " << (a - b) << "\n";
            break;

        case 3:
            std::cout<<"Opção: MULIPLICAÇÃO ESCOLHIDA\n";
            std::cout << "Resultado da multiplicação: " << (a * b) << "\n";
            break;

        case 4:
            std::cout<<"Opção: DIVISÃO ESCOLHIDA\n";
            if (b == 0) {
                std::cout << "Erro: divisão por zero não permitida.\n";
            } else {
                std::cout << "Resultado da divisão: " << (a / b) << "\n";
            }
            break;
    }
}