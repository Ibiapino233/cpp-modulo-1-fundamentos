// Created by stalin on 19/12/2025.
/*
Projeto Final – Módulo 1
Sistema Seguro de Operações

Descrição:
Desenvolver um sistema de linha de comando que apresente um menu
contínuo de opções ao usuário, permitindo a execução de operações
aritméticas e cálculos básicos estudados ao longo do Módulo 1.

Objetivo:
- Integrar todos os conceitos fundamentais de C++
- Criar um programa organizado, legível e seguro
- Simular um pequeno sistema real, não apenas exercícios isolados

Funcionalidades mínimas:
- Menu principal em loop
- Opções numéricas bem definidas
- Execução de cálculos conforme a opção escolhida
- Validação de entradas
- Tratamento de erros
- Encerramento seguro do programa

Conteúdos aplicados:
- Entrada e saída (cin / cout)
- Operadores aritméticos, relacionais e lógicos
- if / switch
- return em funções void
- formatação de saída
- organização e clareza de código

Preocupações de segurança e qualidade:
- Não executar operações com dados inválidos
- Não assumir que a entrada do usuário está correta
- Encerrar o programa de forma controlada
- Tornar o código fácil de ler, explicar e manter
*/
#include <iostream>
#include <iomanip>
#include "ProjetoFinal_MOD_01.h"

//FUNÇÃO PRINCIPAL
void menu_Final() {
    int escolha;
    do {
        std::cout << "\n===== SISTEMA DE OPERAÇÕES =====\n";
        std::cout << "1 - Soma\n";
        std::cout << "2 - Subtração\n";
        std::cout << "3 - Multiplicação\n";
        std::cout << "4 - Divisão\n";
        std::cout << "5 - Reajuste Salarial\n";
        std::cout << "6 - Custo do Carro\n";
        std::cout << "0 - Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                std::cout << "Opção Soma selecionada.\n";
                soma();
                break;

            case 2:
                std::cout << "Opção Subtração selecionada.\n";
                subtracao();
                break;

            case 3:
                std::cout << "Opção Multiplicação selecionada.\n";
                multiplica();
                break;

            case 4:
                std::cout << "Opção Divisão selecionada.\n";
                divisao();
                break;

            case 5:
                std::cout << "Opção Reajuste Salarial selecionada.\n";
                reajusteSalarial();
                break;

            case 6:
                std::cout << "Opção Custo do Carro selecionada.\n";
                custoCarro();
                break;

            case 0:
                std::cout << "Encerrando o sistema...\n";
                break;

            default:
                std::cout << "Opção inválida.\n";
        }

        } while (escolha!=0);

}
//FUNÇÕES SECUNDÁRIAS
void soma() {
    double a, b;
    std::cout << "Digite dois valores: ";
    std::cin >> a >> b;
    std::cout << "Resultado: " << a + b << "\n";
    }

void subtracao() {
    double a, b;
    std::cout << "Digite dois valores: ";
    std::cin >> a >> b;
    std::cout << "Resultado: " << a - b << "\n";
    }

void multiplica() {
    double a, b;
    std::cout << "Digite dois valores: ";
    std::cin >> a >> b;
    std::cout << "Resultado: " << a * b << "\n";
    }
void divisao() {
    double a, b;
    std::cout << "Digite dois valores: ";
    std::cin >> a >> b;

    if (b == 0) {
        std::cout << "Erro: divisao por zero não permitida.\n";
        return;
    }

    std::cout << "Resultado: " << a / b << "\n";
    }

void reajusteSalarial() {
    double salario, percentual;
    std::cout << "Salario atual: ";
    std::cin >> salario;
    std::cout << "Percentual de reajuste: ";
    std::cin >> percentual;

    double novoSalario = salario * (1 + percentual / 100.0);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Novo salario: R$ " << novoSalario << "\n";
    }

void custoCarro() {
    double custoFabrica;
    std::cout << "Custo de fabrica: ";
    std::cin >> custoFabrica;

    double distribuidor = custoFabrica * 0.28;
    double impostos = custoFabrica * 0.45;
    double custoFinal = custoFabrica + distribuidor + impostos;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Custo final ao consumidor: R$ " << custoFinal << "\n";
    }