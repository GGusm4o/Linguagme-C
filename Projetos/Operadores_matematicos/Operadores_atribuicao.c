#include <stdio.h>
int main(){
/*
Operadores de Atribuição:
Atribuição simples (=)
Atribuição com adição (+=)
Atribuição com subtração (-=)
Atribuição com multiplicação (*=)
Atribuição com divisão (/=)
*/
int num1 = 10, num2, resultado;

//Atribuição simples
resultado = 10; //resultado = 10
printf("Resultado: %d\n", resultado);

//Atribuição com adição
resultado += 20; //resultado = resultado + 20
printf("Resultado: %d\n", resultado);

//Atribuição com subtração
resultado -= num1; //resultado = resultado - num1
printf("Resultado: %d\n", resultado);

//Atribuição com multiplicação
resultado *= 5; //resultado = resultado * 5
printf("Resultado: %d\n", resultado);

//Atribuição com divisão
resultado /= 2; //resultado = resultado / 2
printf("Resultado: %d\n", resultado);

return 0;
}