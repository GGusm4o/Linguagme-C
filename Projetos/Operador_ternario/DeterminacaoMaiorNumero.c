#include <stdio.h>
    int main(){
        int num1 = 40, num2 = 60;
        int maior;

        num1 > num2 ? (maior = num1) : (maior = num2);

        if (num1 > num2) {
            printf("O maior número é: %d", num1);
        } else {
            printf("O maior número é: %d", num2);
        }

        printf("O maior número é: %d", maior);

    return 0;
    
    }