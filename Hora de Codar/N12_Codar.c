#include <stdio.h>
//Procura um valor específico e imprimimos sua posição, se encontrado.

#define LINHAS 10
#define COLUNAS 10

int main() {

    int matriz[LINHAS][COLUNAS];
    int target = 90;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < LINHAS; i++) { 
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHAS; i++) {      // Loop externo para as linhas
        for (int j = 0; j < COLUNAS; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("O valor %d foi encontrado no indice (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}