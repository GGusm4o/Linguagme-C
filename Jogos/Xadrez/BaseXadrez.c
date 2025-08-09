#include <stdio.h>
    int main(){
        int bispo; //casas na diagonal superior direita
        int torre; //casas para a direita
        int rainha; //casas para a esquerda
        int cavalo; //duas para baixo, uma para a esquerda
        int i;

        //MOVIMENTAÇÃO DAS PEÇAS
        //Torre
        printf("Movimentação da Torre:\n");
        for(torre = 1; torre<= 5; torre++)
        {
            printf("Direita\n");
        }
        //Bispo
        printf("Movimentação do Bispo:\n");
        bispo = 1;
        while (bispo <= 5)
        {
            printf("Cima, Direita\n");
            bispo++;
        }
        //Rainha
        printf("Movimentação da Rainha:\n");
        rainha = 1;
        do
        {
            printf("Esquerda\n");
            rainha++;
        } while (rainha <= 8);
        //Cavalo
        printf("Movimentação do Cavalo:\n");
        cavalo = 1;
        // Loop externo (for) - duas casas para baixo
        while (cavalo --)
        {
            for (i = 0; i < 2; i++)
            {
                printf("Baixo\n");
            
            }
            printf("Esquerda\n");
        }
        
    return 0;
    }