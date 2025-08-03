#include <stdio.h>
    int main(){
        int temperatura = 10;
        int resultado;

        resultado = temperatura > 30 ? 1 : 0 ;
        if (resultado == 1)
        {
        printf("Está calor!\n");
        } else {
        printf("Está frio!\n");
        }

    return 0;
    }