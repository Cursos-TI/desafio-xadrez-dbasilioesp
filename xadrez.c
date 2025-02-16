#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int contador = 1;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("BISPO:\n");
    while(bispo != 0) {
        printf("%d - Cima Direita\n", contador);
        contador++;
        bispo--;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nTORRE:\n");
    contador = 1;
    while(torre != 0) {
        printf("%d - Direita\n", contador);
        contador++;
        torre--;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nRAINHA:\n");
    contador = 1;
    while(rainha != 0) {
        printf("%d - Esquerda\n", contador);
        contador++;
        rainha--;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nCAVALO:\n");
    contador = 1;
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d - Baixo\n", contador);
            contador++;
        }

        printf("%d - Esquerda\n", contador);
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\n\n");
    return 0;
}
