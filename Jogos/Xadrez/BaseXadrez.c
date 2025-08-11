#include <stdio.h>

// Função para mover a Torre para a direita usando recursão
// 'casas' indica quantas casas a Torre vai se mover
void moverTorre(int casas) {
    if (casas > 0) { // Condição de parada: para quando casas == 0
        printf("Direita\n"); // Movimento para a direita
        moverTorre(casas - 1); // Chamada recursiva com uma casa a menos
    }
}

// Função para mover o Bispo na diagonal "Cima + Direita" usando recursão
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n"); // Movimento na diagonal
        moverBispo(casas - 1); // Chamada recursiva diminuindo as casas
    }
}

// Função para mover a Rainha para a esquerda usando recursão
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // MOVIMENTAÇÃO DAS PEÇAS
    // Torre - movimento recursivo para a direita
    printf("Movimentação da Torre:\n");
    moverTorre(5); // Move 5 casas para a direita

    // Bispo - movimento recursivo na diagonal cima-direita
    printf("Movimentação do Bispo:\n");
    moverBispo(5); // Move 5 casas na diagonal
    
    // Bispo com loops aninhados (forma alternativa)
    printf("Movimentação do Bispo (loops aninhados):\n");
    for (int cima = 0; cima < 5; cima++) { // Loop externo = movimento para cima
        printf("Cima, ");
        for (int lado = 0; lado < 1; lado++) { // Loop interno = movimento para direita
            printf("Direita\n");
        }
    }

    // Rainha - movimento recursivo para a esquerda
    printf("Movimentação da Rainha:\n");
    moverRainha(8); // Move 8 casas para a esquerda

    // Cavalo - movimento em L: duas casas para cima e uma para a direita
    printf("Movimentação do Cavalo:\n");
    // Um único loop que executa 3 movimentos (2 vezes "Cima" + 1 vez "Direita")
    for (int i = 0; i < 3; i++) {
        if (i < 2) { // Nas duas primeiras iterações: movimento para cima
            printf("Cima\n");
        } else { // Na última iteração: movimento para a direita
            printf("Direita\n");
        }
    }
return 0;
}