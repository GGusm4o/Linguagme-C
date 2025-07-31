#include <stdio.h>
    int main(){
        int populacao;
        int pontosTuristicos;
        int opcao;
        float area;
        float pib;
        float densidade;
        float pibPerCapita;
        char estado;
        char codigoCarta[5];
        char nomeCidade[50];

            printf("### CADASTRO DA CARTA ###\n");
            printf("Digite o estado: "); 
            scanf("%c", &estado);
            printf("Digite o código da carta: ");
            scanf("%s", codigoCarta);
            printf("Digite o nome da cidade: ");
            scanf("%s", nomeCidade);
            printf("Digite a população: ");
            scanf("%d", &populacao);
            printf("Digite a área: ");
            scanf("%f", &area);
            printf("Digite o PIB: ");
            scanf("%f", &pib);
            printf("Digite o número de pontos turísticos: ");
            scanf("%d", &pontosTuristicos);

            densidade = populacao / area;
            pibPerCapita = pib / populacao;
            printf("Densidade Populacional: %.2f\n", densidade);
            printf("PIB per Capita: %.2f\n", pibPerCapita);

            printf("--- Menu de Comparação ---\n");
            printf("Escolha uma opção de comparação:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("Digite a opção desejada: ");
            scanf("%d", &opcao);

                switch (opcao)
                {
                    case 1:
                        if (populacao > populacao){
                            printf("Carta 1 venceu\n");
                        } else {
                            printf("Carta 2 venceu\n");
                        }
                        break;
                    case 2:
                        if (area > area){
                            printf("Carta 1 venceu\n");
                        } else {
                            printf("Carta 2 venceu\n");
                        }
                        break;
                    case 3:
                        if (pib > pib){
                            printf("Carta 1 venceu\n");
                        } else {
                            printf("Carta 2 venceu\n");
                        }
                        break;
                    case 4:
                        if (pontosTuristicos > pontosTuristicos){
                            printf("Carta 1 venceu\n");
                        } else {
                            printf("Carta 2 venceu\n");
                        }
                        break;
                    case 5:
                        if (densidade > densidade){
                            printf("Carta 1 venceu\n");
                        } else {
                            printf("Carta 2 venceu\n");
                        }
                        break;
                    case 6:
                        if (pibPerCapita > pibPerCapita){
                            printf("Carta 1 venceu\n");
                        } else {
                            printf("Carta 2 venceu\n");
                        }
                        break;
                    default:
                        printf("Deu impate \n");
                    }

            
    }