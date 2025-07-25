#include <stdio.h>
    int main(){
        // Declaração de variáveis
        //produtos
        char produtoA[50] = "Produto A";
        char produtoB[50] = "Produto B";
        //estoque
        unsigned int estoqueA = 1000;
        unsigned int estoqueB = 2000;
        //valores
        float valorA = 10.50;
        float valorB = 20.40;
        //estoque minimo
        unsigned int estoqueMinimoA = 500;
        unsigned int estoqueMinimoB = 2500;
        //valor total
        double valorTotalA;
        double valorTotalB;
        //resultados
        int resultadoA, resultadoB;
            //Exibir as informações dos produtos
            printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
            printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);
            //compareções com o valor mínimo de estoque
            resultadoA = estoqueA > estoqueMinimoA;
            resultadoB = estoqueB > estoqueMinimoB;

            printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA); //verdadeiro(1) e falso(0)
            printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

            printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n", (estoqueA * valorA), (estoqueB * valorB), (estoqueA * valorA) > (estoqueB * valorB));


    return 0;
}