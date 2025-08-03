#include <stdio.h>
    int main() {
        int idade = 16;
        int resultado;

            resultado = idade >= 18 ? 1 : 0 ;

            if(resultado == 1)
            {
            printf("Você é maior de idade!\n");
            } else {
            printf("Você é menor de idade!\n");
            }
    }