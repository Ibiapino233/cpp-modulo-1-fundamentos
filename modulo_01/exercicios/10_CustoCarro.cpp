//
// Created by stalin on 17/12/2025.
/*
Desafio 10 – Custo do Carro

Enunciado clássico:
O custo de um carro novo ao consumidor é a soma do custo de fábrica
com a porcentagem do distribuidor e dos impostos (aplicados ao custo
de fábrica). Supondo que o percentual do distribuidor seja de 28%
e os impostos de 45%, escreva um algoritmo para ler o custo de fábrica
de um carro, calcular e escrever o custo final ao consumidor.

Objetivo:
- Trabalhar cálculo percentual aplicado
- Consolidar operações com double
- Produzir saída clara e formatada

Contexto:
Esse tipo de cálculo é comum em sistemas de precificação, relatórios
financeiros e análises contábeis. Erros de cálculo ou interpretação
geram impactos diretos ao consumidor.

Requisitos:
- Ler o custo de fábrica
- Aplicar percentual do distribuidor (28%)
- Aplicar percentual de impostos (45%)
- Exibir o custo final com duas casas decimais

Preocupações de segurança e qualidade:
- Não aceitar valores negativos ou zero
- Manter percentuais explícitos no código
- Evitar cálculos implícitos ou ambíguos
- Produzir saída previsível e auditável
*/
#include <iostream>
#include <iomanip>
#include"10_CustoCarro.h"

void custoCarro10() {
    double custoFabrica = 0.0;
    double percentualDistribuidor = 28.0;
    double percentualImpostos = 45.0;
    double PrecoFinal = 0.0;

    std::cout << "Digite o custo de fábrica do carro: ";
    std::cin >> custoFabrica;

    if (custoFabrica <= 0) {
        std::cout << "Erro: custo de fabrica deve ser maior que zero.\n";
        return; //recusar entradas inválidas e retornar ao menu.
    }

    PrecoFinal = custoFabrica * (1 + percentualDistribuidor / 100 + percentualImpostos / 100);

    std::cout << "\n--- Resultado ---\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Custo final ao consumidor: R$ " << PrecoFinal << std::endl;

}