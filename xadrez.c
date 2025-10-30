#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
      int i;
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre (for)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (while)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimento da Rainha (do-while)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    #include <stdio.h>

int main() {
    int i, j;

    // ==========================
    // Movimento do CAVALO em L
    // ==========================
    // O cavalo move-se 2 casas em uma direção e 1 em outra.
    // Vamos simular o movimento "Baixo e Esquerda" usando loops aninhados.

    printf("Movimento do Cavalo (L - Baixo e Esquerda):\n");

    // Loop externo (for) - movimento vertical (2 casas para baixo)
    for (i = 1; i <= 2; i++) {
        printf("Baixo\n");

        // Loop interno (while) - movimento horizontal (1 casa para a esquerda)
        j = 1;
        while (j <= 1) {
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}


    // Nível Mestre - Funções Recursivas e Loops Aninhados
   #include <stdio.h>

// ==========================
// Funções recursivas
// ==========================
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispo(int linha, int coluna, int limite) {
    if (linha == limite || coluna == limite) return;
    printf("Cima, Direita\n");
    moverBispo(linha + 1, coluna + 1, limite);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;

    int i, j;

    // ==========================
    // Torre
    // ==========================
    printf("Movimento da Torre:\n");
    moverTorre(CASAS_TORRE);

    // ==========================
    // Bispo
    // ==========================
    printf("\nMovimento do Bispo:\n");
    moverBispo(0, 0, CASAS_BISPO);

    // ==========================
    // Rainha
    // ==========================
    printf("\nMovimento da Rainha:\n");
    moverRainha(CASAS_RAINHA);

    // ==========================
    // Cavalo (loops com múltiplas variáveis e break/continue)
    // ==========================
    printf("\nMovimento do Cavalo (L - Cima e Direita):\n");

    for (i = 1, j = 1; i <= 2 || j <= 1; i++, j++) {
        if (i <= 2) {
            printf("Cima\n");
        }
        if (j <= 1) {
            printf("Direita\n");
        }
        if (i == 2 && j == 1) {
            printf("Fim do movimento em L\n");
            break; // encerra após completar o L
        }
    }

    return 0;
}


    return 0;
}
