#include <stdio.h>
    int main(){
        /*int a = -10, b = -5;
            if (a > 0  b > 0) {
                printf("Pelo menos um dos números é positivo.\n");
            } else {
                printf("Os dois números são negativos.\n");
            }

        int a = 10;

            if(!(a < 0)) {
                printf("A variavel é negativa.\n");
            } else {
                printf("Variável é positiva.\n");
            }
*/
        int a = 5;
        int b = 10;
        int c = 1;
            // a > 0 => Verdadeiro
            // b < 0 => Falso
            // Verdadeiro && Falso => Falso
            // Falso || c == 0
            // Falso || Falso => Falso
            if(a > 0 && b < 0 && c == 0) {
                printf("A condição é verdadeira.\n");
            } else {
                printf("A condição é falsa.\n");
            }



    }