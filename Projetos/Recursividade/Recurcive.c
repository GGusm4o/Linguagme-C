#include <stdio.h>

void recursivo(int numero) {
    if (numero > 0) 
    {
        printf("%d \n", numero);
        recursivo(numero - 1);
    }
}

    int main(){

        int quantidade = 10;

        printf("Contagem regressiva... \n");
        recursivo(quantidade);


    return 0;
    }