// Created by stalin on 17/12/2025.

/*
Desafio 09 – Reajuste Salarial

Enunciado clássico:
Escreva um algoritmo para ler o salário mensal atual de um funcionário
e o percentual de reajuste.
Calcular e escrever o valor do novo salário.

Objetivo:
- Trabalhar cálculo percentual aplicado
- Consolidar leitura de valores reais (double)
- Produzir saída clara e formatada

Contexto:
Reajustes salariais aparecem em sistemas contábeis, folhas de pagamento
e relatórios financeiros. Erros de cálculo ou formatação podem gerar
impactos reais e indesejados.

Requisitos:
- Ler o salário atual
- Ler o percentual de reajuste
- Calcular o novo salário
- Exibir o resultado com duas casas decimais

Preocupações de segurança e qualidade:
- Não aceitar valores negativos
- Evitar percentuais inválidos
- Produzir saída previsível e auditável
*/

#include <iostream>
#include <iomanip>
#include "09_ReajusteSalarial.h"

void reajusteSalarial9() {
    double soldoAntigo=0.0, soldoAjustado=0.0, percentAjuste=0.0;

    std::cout<<"Qual o salário atual? ";
    std::cin>>soldoAntigo;
    std::cout<<"Qual o percentual de ajuste? ";
    std::cin>>percentAjuste;

    soldoAjustado=soldoAntigo*(1+percentAjuste/100);

    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<< "--------VALORES AJUSTADOS--------\n";
    std::cout<< "O novo salário é de R$ "<< soldoAjustado<<" ."<<std::endl; // endl insere quebra de linha
                                                                            //e Força o flush do buffer (envia imediatamente para a saída)

}