#include <stdio.h>
    int main(){
        int bispo; //casas na diagonal superior direita
        int torre; //casas para a direita
        int rainha; //casas para a esquerda
        int i;

        //MOVIMENTAÇÃO DAS PEÇAS
        //Torre
        printf("Movimentação da Torre:\n");
        for(i = 1; i <= 5; i++)
        {
            printf("Direita\n");
        }
        //Bispo
        printf("Movimentação do Bispo:\n");
        i = 1;
        while (i <= 5)
        {
            printf("Cima, Direita\n");
            i++;
        }
        //Rainha
        printf("Movimentação da Rainha:\n");
        i = 1;
        do
        {
            printf("Esquerda\n");
            i++;
        } while (i <= 8);
        
    return 0;
    }