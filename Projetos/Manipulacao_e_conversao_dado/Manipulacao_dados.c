#include <stdio.h>
 
int main() {
    /*
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Note que a divisão de inteiros resulta em um número inteiro
    */

    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // Divisão de pontos flutuante

    /*
    printf("Soma: %f\n", soma);
    printf("Diferença: %f\n", diferenca);
    printf("Produto: %f\n", produto);
    printf("Quociente: %f\n", quociente);
    */
    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

    return 0;
}