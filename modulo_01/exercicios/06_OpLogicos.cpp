/*
Desafio 06 – Operadores Lógicos

Objetivo:
- Utilizar operadores lógicos para combinar condições
- Compreender a diferença entre AND (&&), OR (||) e NOT (!)
- Criar decisões mais realistas e robustas

Contexto:
Este desafio simula regras comuns em sistemas reais, como
verificação de acesso, aprovação por múltiplos critérios
ou validação de condições combinadas.

Requisitos:
- Ler idade e status (ex: aprovado ou não)
- Utilizar operadores lógicos para avaliar as regras
- Exibir mensagens claras sobre o resultado da avaliação

Preocupações de segurança e qualidade:
- Não assumir que uma única condição é suficiente
- Garantir que as regras sejam explícitas e auditáveis
- Evitar decisões ambíguas ou implícitas
- Facilitar a leitura e manutenção do código
*/
#include <iostream>
#include "06_OpLogicos.h"

void logicos ( ) {
    int idade=0;
    bool aprovado = false;

    std::cout << "Insira a idade: ";
    std::cin>> idade;

    std::cout<< "Digite 1 para APROVADO e 0 para REPROVADO: ";
    std::cin>> aprovado;

    std::cout<< "\n-------RESULTADO-------\n";
    if (idade>=18 && aprovado==true) {
        std::cout<<"ACESSO PERMITIDO.";
    }
    if (idade<18 || aprovado==false) {
        std::cout<<"ACESSO NEGADO.";
    }

}
// Created by stalin on 16/12/2025.
//