// Created by stalin on 17/12/2025.

/*
Desafio 12 – Incremento e Expressões Compostas

Enunciado clássico:
Faça um algoritmo que demonstre o funcionamento dos operadores
de incremento e decremento, bem como operadores de atribuição
composta, evidenciando a diferença entre pré-incremento e
pós-incremento.

Objetivo:
- Compreender a diferença entre ++variavel e variavel++
- Utilizar operadores de atribuição composta (+=, -=, *=, /=)
- Tornar explícito o efeito dessas operações no valor das variáveis

Contexto:
Incrementos e expressões compostas são amplamente usados em laços,
contadores, pontuação de jogos e controle de estados. Um uso incorreto
pode gerar erros difíceis de identificar.

Requisitos:
- Demonstrar pré-incremento e pós-incremento
- Demonstrar operadores de atribuição composta
- Exibir o valor da variável antes e depois das operações

Preocupações de segurança e qualidade:
- Tornar cada alteração de valor explícita
- Evitar expressões ambíguas
- Facilitar a leitura e a explicação do código
*/

#include <iostream>
#include "12_IncrementoComposto.h"

void incrementoComposto() {
    int x = 7;

    std::cout << "Valor inicial de x: " << x << "\n";

    std::cout << "Pos-incremento (x++): " << x++ << "\n";
    std::cout << "Valor de x após x++: " << x << "\n";

    std::cout << "Pre-incremento (++x): " << ++x << "\n";
    std::cout << "Valor de x após ++x: " << x << "\n";

    x += 5;
    std::cout << "Valor de x apos x += 5: " << x << "\n";

    x -= 3;
    std::cout << "Valor de x apos x -= 3: " << x << "\n";

    x *= 2;
    std::cout << "Valor de x apos x *= 2: " << x << "\n";

    x /= 4;
    std::cout << "Valor de x apos x /= 4: " << x << "\n";
}
