//
// Created by stalin on 17/12/2025.
/*
Desafio 11 – Precedência de Operadores (Refatorado)

Enunciado clássico:
Faça um algoritmo que leia dois números inteiros e realize operações
aritméticas demonstrando a diferença entre expressões com e sem o uso
de parênteses, evidenciando a precedência de operadores.

Objetivo:
- Consolidar o entendimento da precedência de operadores
- Demonstrar como parênteses alteram o resultado das expressões
- Refatorar código antigo para um padrão mais organizado e seguro

Contexto:
Erros de precedência são comuns em sistemas reais e podem gerar
resultados incorretos em cálculos financeiros, estatísticos ou lógicos.
Este desafio simula a necessidade de clareza em expressões matemáticas.

Requisitos:
- Ler dois valores inteiros
- Realizar cálculos com e sem parênteses
- Exibir os resultados de forma clara
- Utilizar formatação adequada na saída

Preocupações de segurança e qualidade:
- Evitar divisão por zero
- Tornar as expressões matemáticas explícitas
- Separar claramente entrada, processamento e saída
- Produzir código legível e auditável
*/

#include <iostream>
#include <iomanip>
#include "11_PrecedenciaRefatorada.h"

void precedencia() {
    double a = 0.0;
    double b = 0.0;

    std::cout << "Digite o primeiro número inteiro(a): ";
    std::cin >> a;

    std::cout << "Digite o segundo numero inteiro(b): ";
    std::cin >> b;

    std::cout << "\n--- Resultados ---\n";

    std::cout << "a + b * 2 = " << (a + b * 2) << "\n";
    std::cout << "(a + b) * 2 = " << ((a + b) * 2) << "\n";

    if (b != 0) {
        std::cout << "a / b + 5 = " << (a / b + 5) << "\n";
        std::cout << "a / (b + 5) = " << (a / (b + 5)) << "\n";
    } else {
        std::cout << "divisão não permitida (b igual a zero).\n";
    }

}

