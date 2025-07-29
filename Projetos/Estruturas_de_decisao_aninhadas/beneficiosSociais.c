#include <stdio.h>
//Verificação de benefícios sociais
    int main() {
        int idade, dependentes;
        float renda;

        //A primeira condição idade do usuário está entre 18 e 60 anos.
        //A segunda condição se a renda do usuário seja menor que 3000.
        //A terceira condição verifica se o número de dependentes é maior que 2.

            printf("Digite a sua idade: ");
            scanf("%d", &idade);
            printf("Digite a sua renda mensal: ");
            scanf("%f", &renda);
            printf("Digite o número de dependentes: ");
            scanf("%d", &dependentes);
                if (idade >= 18 && idade < 65) {
                    if (renda < 3000.0) {
                        if (dependentes > 2) {
                            printf("Você está qualificado para os benefícios\n");
                        } else {
                            printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
                        }
                        } else {
                            printf("Você não está qualificado para os benefícios devido à renda\n");
                        }
                        } else {
                            printf("Você não está qualificado para os benefícios devido à idade\n");
                    }

    return 0;
    }