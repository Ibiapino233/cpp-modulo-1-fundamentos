//
// Created by stalin on 17/12/2025.

/*
Desafio 08 – Percentual de Votos

Enunciado clássico:
Escreva um algoritmo para ler o número total de eleitores de um município,
o número de votos brancos, nulos e válidos.
Calcular e escrever o percentual que cada um representa
em relação ao total de eleitores.

Objetivo:
- Trabalhar cálculos percentuais
- Consolidar leitura de múltiplos valores
- Produzir saída clara e formatada

Contexto:
Cálculo de percentuais é comum em relatórios estatísticos,
sistemas eleitorais, análises contábeis e dashboards.

Requisitos:
- Ler o total de eleitores
- Ler votos brancos, nulos e válidos
- Calcular o percentual de cada tipo de voto
- Exibir os resultados com duas casas decimais

Preocupações de segurança e qualidade:
- Não permitir valores negativos
- Garantir que a soma dos votos não ultrapasse o total de eleitores
- Evitar divisão por zero
- Produzir saída clara, previsível e auditável
*/
#include <iostream>
#include <iomanip>
#include "08_PercentualVotos.h"

void PercentualVotos() {
    int totalEleitores=0, Brancos=0, Nulos=0, Validos=0;
    std::cout << "Digite o total de eleitores: ";
    std::cin >> totalEleitores;

    if (totalEleitores <= 0) {
        std::cout << "Erro: total de eleitores deve ser maior que zero.\n";
        return;
    }
    std::cout << "Digite o numero de votos brancos: ";
    std::cin >> Brancos;
    std::cout << "Digite o numero de votos nulos: ";
    std::cin >> Nulos;
    std::cout << "Digite o numero de votos válidos: ";
    std::cin >> Validos;

    if (Brancos < 0 || Nulos < 0 || Validos < 0) {
        std::cout << "ERRO: não são permitidos valores negativos.\n";
        return;
    }
    if (Brancos + Nulos + Validos > totalEleitores) {
        std::cout << "Erro: a soma dos votos ultrapassa o total de eleitores.\n";
        return;
    }

    double percBrancos = (double) Brancos / totalEleitores * 100;
    double percNulos   = (double) Nulos   / totalEleitores * 100;
    double percValidos = (double) Validos / totalEleitores * 100;

    std::cout << "\n--- Resultado ---\n";
    std::cout<< std::fixed<< std::setprecision(2)<<std::endl;

    std::cout << "Votos brancos: "<< percBrancos <<" %\n";
    std::cout << "Votos nulos: "<< percNulos << " %\n";
    std::cout << "Votos validos: "<< percValidos <<" %\n";




}