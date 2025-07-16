#include <stdio.h>
int main() {
    /*
    Operações Aritméticas Básicas
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */
   int num1, num2;
   int soma, subtracao, multiplicacao, divisao;

   //Entrada e leitura de dados
   printf("Digite o primeiro número: ");
   scanf("%d", &num1);

   printf("Digite o segundo número: ");
   scanf("%d", &num2);

    //Operação Soma
   soma = num1 + num2;

    //Operação Subtração
   subtracao = num1 - num2;

    //Operação Multiplicação
   multiplicacao = num1 * num2;

    //Operação Divisão
   divisao = num1 / num2;

    //Exibição dos resultados
    printf("Resultado da Soma: %d\n", soma);
    printf("Resultado da Subtração: %d\n", subtracao);
    printf("Resultado da Multiplicação: %d\n", multiplicacao);
    printf("Resultado da Divisão: %d\n", divisao);

    return 0;
}