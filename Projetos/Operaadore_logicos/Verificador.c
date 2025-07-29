#include <stdio.h>
    int main() {
        int idade = 17;
        float altura = 1.75;
            //idade >= 18 => Verdadeira
            //idade <= 30 => Verdadeira
            //Falso && Verdadeiro => Verdadeiro
            //Falso && Altura > 1.70
            //Falso && Verdadeiro => Falso

            if (idade >= 18 && idade <= 30 && altura >= 1.70) {
                printf("Você está na faixa etária e tem altura adequadas.\n");
            } else {
                printf("Você não atende aos critérios.\n");
            }
    }