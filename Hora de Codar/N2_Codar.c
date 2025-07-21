#include <stdio.h>
    int main() {
//Hora de Codar
//Calculo de Média
    float nota1, nota2, nota3;
    float media;

    printf("Calculo de Média\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média é: %.1f\n", media);

    return 0;
}