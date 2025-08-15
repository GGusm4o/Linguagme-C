#include <stdio.h>
 
    int main() {
        int vetor[5] = {1, 2, 3, 4, 5};
        int soma = 0;
    
        // Calculando a soma dos elementos do vetor
        for (int i = 0; i < 5; i++) {
            soma += vetor[i];
        }
        printf("A soma dos elementos do vetor é: %d\n", soma);
    
    return 0;
}