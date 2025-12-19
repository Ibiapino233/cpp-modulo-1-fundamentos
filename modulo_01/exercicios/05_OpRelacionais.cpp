/*
Desafio 05 – Operadores Relacionais

Objetivo:
- Compreender e utilizar operadores relacionais
- Realizar comparações entre valores numéricos
- Produzir decisões lógicas claras a partir dessas comparações

Contexto:
Este desafio simula validações comuns em sistemas reais,
como verificação de idade mínima, limites aceitáveis de valores
ou condições necessárias para acesso a uma funcionalidade.

Requisitos:
- Ler dois valores inteiros
- Comparar esses valores utilizando operadores relacionais
  (>, <, >=, <=, ==, !=)
- Exibir mensagens claras indicando o resultado das comparações

Preocupações de segurança e qualidade:
- Não assumir que os valores digitados são válidos ou coerentes
- Garantir que cada comparação tenha uma mensagem explícita
- Evitar ambiguidade na interpretação dos resultados
- Tornar o fluxo de decisão fácil de entender e auditar
*/
#include <iostream>
#include "05_OpRelacionais.h"

void relacionais () {
  int a=0;
  int b=0;

  std::cout<< "Digite o primeiro valor: ";
  std::cin>> a; "\n";

  std::cout<< "Digite o segundo valor: ";
  std::cin>> b;"\n";

  std::cout<< "\n-----Comparações-----\n";

  if (a>b) { std::cout<< "O Valor a é maior que b.";
  }

  if (a<b) { std::cout<< "O valor de a é menor que b.";
  }

  if (a==b) {
    std::cout << "a == b (a é igual a b)\n";
  }

}

// Created by stalin on 16/12/2025.
//