#include <stdio.h>
// Saída de dados com Scanf

int main() {

    int idade;
    float altura;
    char opcao;
    char nome[20];
    // sintaxe scanf
    // scanf("%formato1" "'formato2, &variavel, &variavel2, ...);

    printf("Digite sua idade: ");
    // & é usado para indicar o endereço da variável
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite sua opção: ");
    scanf(" %c", &opcao); // espaço antes de %c para ignorar
    printf("A opção é: %c\n", opcao);

    printf("Digite seu nome: ");
    scanf("%s", nome); // lê uma string até o espaço
    printf("O nome é: %s\n", nome);
    
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