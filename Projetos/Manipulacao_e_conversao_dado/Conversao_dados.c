#include <stdio.h>
    int main(){
    /*
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // Conversão implícitamente para float

    printf("Resultado: %.2f\n", resultado);
    */

    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // Conversão explícita para float

    printf("Quociente: %.2f\n", quociente);
    
    return 0;
}
