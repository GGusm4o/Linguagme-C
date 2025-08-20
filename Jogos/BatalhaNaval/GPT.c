#include <stdio.h>

#define TAM 10
#define HAB 5  // tamanho fixo das matrizes de habilidades

// Função para inicializar o tabuleiro
void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para imprimir o tabuleiro com símbolos
void imprimirTabuleiro(int tabuleiro[TAM][TAM], char linha[10]) {
    printf("   ");
    for (int i = 0; i < TAM; i++) {
        printf(" %c", linha[i]);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 0) printf(" ~");   // água
            else if (tabuleiro[i][j] == 3) printf(" #"); // navio
            else if (tabuleiro[i][j] == 5) printf(" *"); // habilidade
        }
        printf("\n");
    }
}

// Função para construir matriz Cone (5x5)
void construirCone(int cone[HAB][HAB]) {
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            if (j >= (HAB/2 - i) && j <= (HAB/2 + i)) cone[i][j] = 1;
            else cone[i][j] = 0;
        }
    }
}

// Função para construir matriz Cruz (5x5)
void construirCruz(int cruz[HAB][HAB]) {
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            if (i == HAB/2 || j == HAB/2) cruz[i][j] = 1;
            else cruz[i][j] = 0;
        }
    }
}

// Função para construir matriz Octaedro (5x5)
void construirOctaedro(int oct[HAB][HAB]) {
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            if (abs(i - HAB/2) + abs(j - HAB/2) <= HAB/2) oct[i][j] = 1;
            else oct[i][j] = 0;
        }
    }
}

// Função para aplicar habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[TAM][TAM], int hab[HAB][HAB], int origemX, int origemY) {
    int centro = HAB / 2;
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            if (hab[i][j] == 1) {
                int x = origemX + (i - centro);
                int y = origemY + (j - centro);
                // Verificar limites
                if (x >= 0 && x < TAM && y >= 0 && y < TAM) {
                    if (tabuleiro[x][y] == 0) {
                        tabuleiro[x][y] = 5; // marca habilidade só se for água
                    }
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};

    inicializarTabuleiro(tabuleiro);

    // --- Colocar alguns navios (exemplo fixo)
    for (int i = 0; i < 3; i++) tabuleiro[2][i + 3] = 3; // horizontal
    for (int i = 0; i < 3; i++) tabuleiro[i + 5][7] = 3; // vertical

    // --- Criar habilidades
    int cone[HAB][HAB], cruz[HAB][HAB], oct[HAB][HAB];
    construirCone(cone);
    construirCruz(cruz);
    construirOctaedro(oct);

    // --- Aplicar habilidades no tabuleiro
    aplicarHabilidade(tabuleiro, cone, 4, 4); // centro aproximado
    aplicarHabilidade(tabuleiro, cruz, 7, 2);
    aplicarHabilidade(tabuleiro, oct, 5, 5);

    // --- Mostrar resultado
    imprimirTabuleiro(tabuleiro, linha);

    return 0;
}

