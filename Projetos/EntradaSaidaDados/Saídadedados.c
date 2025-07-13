#include <stdio.h>
// Saída de dados com printf

int main() {

    int idade = 17;
    float altura = 1.75;
    char opcao = 'G';
    char nome[20] = "Guilherme";
 
    // printf("Idade: %d é %d\n", nome, idade);
    printf("A idade é: %d\n", idade);
    printf("O nome é: %s\n", nome);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é : %c\n", opcao);
 
    return 0;

/*
printf("%formatol formato2 Sformato3", variavell, variavel2, variavel3)

%d: Imprime un número inteiro decimal.
%i: Equivalente a %d.
%f: Imprime un número de ponto flutuante no formato padrão.
%e: Imprime un número de ponto flutuante na notação cientifica.
%c: Imprima un único caractere
%s: Imprime uma cadeia (string) de caracteres.
*/

}