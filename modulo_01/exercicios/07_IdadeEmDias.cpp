// Created by stalin on 17/12/2025.
/*
Desafio 07 – Idade em Dias

Enunciado clássico:
Faça um algoritmo que leia a idade de uma pessoa expressa em anos,
meses e dias e escreva a idade dessa pessoa expressa apenas em dias.
Considere ano com 365 dias e mês com 30 dias.

Objetivo:
- Trabalhar leitura de múltiplos valores inteiros
- Realizar cálculo composto a partir de regras definidas
- Consolidar operadores aritméticos e saída clara

Contexto:
Conversão de unidades é comum em sistemas reais, como relatórios,
cadastros, controle de tempo e pontuação em jogos.

Requisitos:
- Ler anos, meses e dias
- Converter tudo para dias
- Exibir o total de dias de forma clara

Preocupações de segurança e qualidade:
- Não aceitar valores negativos
- Garantir que os cálculos sigam regras explícitas
- Produzir saída previsível e fácil de interpretar
*/
#include <iostream>
#include "07_IdadeEmDias.h"

void IdadeEmDias() {
    int idade=0, anos=0, meses=0, dias=0;
    std::cout<<"Diga quantos anos possui: ";
    std::cin>> anos;
    std::cout<<"Diga quantos meses possui: ";
    std::cin>> meses;
    std::cout<<"Diga quantos dias: ";
    std::cin>> dias;

    idade=anos*365+meses*30+dias;

    std::cout<<"\n-------CALCULADORA DE IDADE\n";
    std::cout<<"Você possui " << idade<< " dias de vida";

}


