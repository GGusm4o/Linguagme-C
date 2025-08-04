#include <stdio.h>
    int main(){
        int opcao;
        float nota1, nota2, media;

        printf("Menu de Gerenciamento de Estudante\n");
        printf("1. Calcular Média\n");
        printf("2. Determinar Status\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Calcular a Média\n");
            printf("Digite a primeira nota\n");
            scanf("%f", &nota1);
            printf("Digite a segunda nota\n");
            scanf("%f", &nota2);
            //Testar á condição se a nota é >=0 e <= 10
            if ( (nota1 >=0 && nota1 <= 10 ) && (nota2 >=0 && nota2 <= 10 ) )
            {
                media = (nota1 + nota2) / 2;
                printf("A média é %.2f\n", media);
            } else {
                printf("Entrada com valores errados de nota!\n");
            }
            break;
        case 2:
            printf("Determinar Status\n");
            printf("Entrar com a média: ");
            scanf("%f", &media);
            //media >= 5 ? printf("Aprovado!\n") : printf("Reprovado!\n");

            if (media >= 7)
            {
                printf("Aprovado!\n");
            } else if (media >= 5)
            {
                printf("Recuperação!\n");
            } else 
            {
                printf("Reprovado!\n");
            }
            break;
        case 3:
            printf("Sair\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }

    }