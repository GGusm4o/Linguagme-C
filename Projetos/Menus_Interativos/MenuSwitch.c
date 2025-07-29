#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main() {
        int opcao, regras;
        int numeroSecreto, palpite;

            printf("Menu Principal\n");
            printf("1. Iniciar Jogo\n");
            printf("2. Ver Regras\n");
            printf("3. Sair\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);

                switch (opcao) 
                {
                    case 1:
                        srand(time(0));
                        numeroSecreto = rand() % 10;
                        printf("Digite um numero de 0 a 9: ");
                        scanf("%d", &palpite);
                        if (numeroSecreto == palpite) 
                        {
                            printf("Parabéns! Você acertou!\n");
                        } else {
                            printf("Você errou!\n", numeroSecreto);
                            printf("O Numero secreto era: %d\n", numeroSecreto);
                        }                        
                        break;
                    case 2:
                        printf("A Expicação das regras!\n");
                        printf("Digite as opções relacionada as regras do jogo!\n");
                        scanf("%d", &regras);
                            switch (regras)
                            {
                            case 1:
                                printf("Regra 1: Você deve adivinhar o número secreto.\n");
                                break;
                            case 2:
                                printf("Regra 2: O número secreto é um número entre 0 e 9.\n");
                                break;  
                            
                            default:
                                break;
                            }
                        break;
                    case 3:
                        printf("Saindo do jogo\n");
                        break;
                    default:
                        printf("Opção inválida!\n");
                }
            }