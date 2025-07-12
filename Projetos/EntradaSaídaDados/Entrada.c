#include <stdio.h>
int main() {
    int idade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "Bruno";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    return 0;

    /*
printf("%formatol formato2 Sformato3", variavell, variavel2, variavel3)

No: Imprime un inteiro no formato decimal.

%1: Equivalente a %0.
%f: Imprime un número de ponto flutuante no formato padrão.
%x: Imprime un número inteiro no formato hexadecimal.
%e: Imprime un número de ponto flutuante na notação cientifica.
%c: Imprima un único caractere
%a: Imprime una cadeia (string) de caracteres.
*/
}