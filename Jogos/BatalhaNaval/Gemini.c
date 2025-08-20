#include <stdio.h>

#define HAB 5

void desenharCone(int tabuleiro[][10], int linha_inicial, int coluna_inicial, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = coluna_inicial - i; j <= coluna_inicial + i; j++) {
            if (linha_inicial + i < 10 && j >= 0 && j < 10) {
                tabuleiro[linha_inicial + i][j] = 2;
            }
        }
    }
}

// =================== FUNÇÕES CORRIGIDAS ===================
void desenharCruz(int tabuleiro[][10], int linha_central, int coluna_central, int raio) {
    // 1. Desenha a barra horizontal
    for (int j = coluna_central - raio; j <= coluna_central + raio; j++) {
        if (linha_central >= 0 && linha_central < 10 && j >= 0 && j < 10) {
            tabuleiro[linha_central][j] = 1;
        }
    }

    // 2. Desenha a barra vertical
    for (int i = linha_central - raio; i <= linha_central + raio; i++) {
        if (i >= 0 && i < 10 && coluna_central >= 0 && coluna_central < 10) {
            tabuleiro[i][coluna_central] = 1;
        }
    }
}

// Corrigi esta função também, pois ela tinha o mesmo problema.
// Por enquanto, ela vai desenhar uma cruz. Depois podemos dar a ela a forma de um losango (octaedro).
void desenharOctaedro(int tabuleiro[][10], int linha_central, int coluna_central, int raio) {
    // 1. Desenha a barra horizontal
    for (int j = coluna_central - raio; j <= coluna_central + raio; j++) {
        if (linha_central >= 0 && linha_central < 10 && j >= 0 && j < 10) {
            tabuleiro[linha_central][j] = 1;
        }
    }

    // 2. Desenha a barra vertical
    for (int i = linha_central - raio; i <= linha_central + raio; i++) {
        if (i >= 0 && i < 10 && coluna_central >= 0 && coluna_central < 10) {
            tabuleiro[i][coluna_central] = 1;
        }
    }
}

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    //Inicializar o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //Inicialização dos navios
    int tamanhoNavio = 3;
    for (int i = 0; i < tamanhoNavio; i++){
        tabuleiro[2][i + 3] = 3; // Navio horizontal
    }
    for (int i = 0; i < tamanhoNavio; i++){
        tabuleiro[i + 5][7] = 3; // Navio vertical
    }
    for (int i = 2; i <= 4; i++) {
        tabuleiro[i][i] = 3; // Navio diagonal principal
    }
    for (int j = 2; j <= 4; j++) {
        tabuleiro[j][9 - j] = 3; // Navio diagonal secundária
    }

    //Habilidades
    desenharCone(tabuleiro, 5, 2, 3);
    desenharCruz(tabuleiro, 4, 5, 1);
    desenharOctaedro(tabuleiro, 8, 5, 1);

    // Exibir o tabuleiro
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf(" %c", linha[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}