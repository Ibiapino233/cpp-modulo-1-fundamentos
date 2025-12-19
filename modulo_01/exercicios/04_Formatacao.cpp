/*
Desafio 04 – Formatação de Saída

Objetivo:
- Aprender a controlar a forma como números são exibidos na tela
- Utilizar std::fixed e std::setprecision
- Garantir clareza e previsibilidade na apresentação de dados numéricos

Contexto:
Este desafio simula a exibição de valores monetários em um sistema simples.
Em sistemas contábeis, financeiros ou de jogos (placar, pontuação, saldo),
uma formatação incorreta pode gerar interpretações erradas dos dados.

Requisitos:
- Ler um valor numérico do tipo double
- Ler uma taxa ou percentual
- Calcular um valor final com base nesses dados
- Exibir o resultado com exatamente duas casas decimais

Preocupações de segurança e qualidade:
- Evitar saídas ambíguas (ex: excesso ou falta de casas decimais)
- Garantir consistência visual na apresentação dos dados
- Produzir uma saída clara, legível e padronizada
- Não confiar que o usuário entende notação científica ou valores implícitos
*/

#include <iostream>
#include <iomanip> // biblioteca de formatação
#include "04_Formatacao.h"

// Created by stalin on 16/12/2025.

void Formatacao () {
    double valor;
    double taxa;
    double valorFinal;

    std::cout<<"Digite o valor base: ";
    std::cin>>valor;

    std::cout<<"Digite o taxa: ";
    std::cin>>taxa;

    valorFinal=valor*taxa;

    std::cout<<"\n ------ RESULTADO -------\n";
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<< "   Valor final: R$ " << valorFinal<<std::endl;
}