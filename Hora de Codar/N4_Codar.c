#include <stdio.h>
    int main() {
        float temperatura, umidade;
        unsigned int estoque, estoqueMinimo = 1000;

            printf("Entre com a temperatura: ");
            scanf("%f", &temperatura);
            printf("Entre com a umidade: ");
            scanf("%f", &umidade);
            printf("Entre com o estoque: ");
            scanf("%u", &estoque);

                if (temperatura > 30) {
                    printf("A temperatura está alta.\n");
                } else {
                    printf("A temperatura está dentro dos parâmetros.\n");
                }
            
                if (umidade > 50) {
                    printf("A umidade está elevada.\n");
                } else {
                    printf("A umidade está dentro dos parâmetros.\n");
                }
            
                if (estoque < 100) {
                    printf("O estoque está baixo.\n");
                } else {
                    printf("O estoque está dentro dos parâmetros.\n");
                }

                if (estoque < estoqueMinimo) {
                    printf("O estoque está abaixo do mínimo!\n");
                } else {
                    printf("O estoque está normal!\n");
                }

    }