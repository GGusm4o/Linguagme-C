#include <stdio.h>
int main(){
/*
Incremento (++)
Pós-incremento (a++)
Pré-incremento (++a)
Decremento (--)
Pós-decremento (a--)
Pré-decremento (--a)
*/

int num1 = 1, resultado;

// pré-incremento | pré-decremento
printf("Valor inicial: %d\n", num1); // Exibe 1


// Incremento
// num1 = num1 + 1;
// num1 += 1;
/*
Pos - incremento
resultado = num1;
num1++;
*/
resultado = num1++; // Incremento
//printf("Pós-incremento: %d\n", num1); // Exibe 2
printf("Apos pós-incremento - número 1: %d - resultado: %d\n", num1, resultado ); 

resultado = ++num1; // Incremento
//printf("Pós-incremento: %d\n", num1); // Exibe 2
printf("Apos pré-incremento - número 1: %d - resultado: %d\n", num1, resultado ); 

// Decremento
// num1 = num1 - 1;
// num1 -= 1;
//num1--; // Decremento
//printf("Pós-decremento: %d\n", num1);
resultado = num1--; // Decremento
printf("Apos pós-decremento - número 1: %d - resultado: %d\n", num1, resultado );
resultado = --num1; // Decremento
printf("Apos pré-decremento - número 1: %d - resultado: %d\n", num1, resultado );

return 0;


}