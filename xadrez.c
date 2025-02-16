#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void mover(int numero, char movimento[20]){
    if (numero > 0) {
        printf("%s\n", movimento);
        mover(numero - 1, movimento);
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int contador = 1;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("BISPO:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            if (j % 2 == 1) printf("Direita - %d %d\n", i, j);
            else printf("Cima - %d %d\n", i, j);
        }
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nTORRE:\n");
    mover(5, "Direita");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nRAINHA:\n");
    mover(8, "Esquerda");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nCAVALO:\n");
    for (int i = 0, j = 0; i < 3 && j < 2; j++, i++) {
        printf("Baixo\n");
        if (j == 1) printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\n\n");
    return 0;
}
