#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
    int main(){
        // Definição das variáveis para armazenar as propriedades das cidades
        int opcao;
        int resultado1, resultado2;
        //Carta 1
        char estado1[3];
        char codigoCarta1[5];
        char Cidade1[50];
        int populacao1;
        float area1; // Em km²
        float pib1; // Em bilhões
        int pontosTuristicos1;
        float densidadePopulacional1 ;
        float pibPerCapita1;
        // Carta 2
        char estado2[3];
        char codigoCarta2[5];
        char Cidade2[50];
        int populacao2;
        float area2; //Em km²
        float pib2; // Em bilhões
        int pontosTuristicos2;
        float densidadePopulacional2 ;
        float pibPerCapita2;

            // Cadastro das Cartas:
            // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
            // utilizando a função scanf para capturar as entradas.
            //CARTA 1
            printf("--- Cadastro da Carta 1 ---\n");
            printf("Digite o estado: ");
            scanf("%s", estado1);
            printf("Digite o código da carta: ");
            scanf("%s", codigoCarta1);
            printf("Digite o nome da cidade: ");
            scanf("%s", Cidade1);
            printf("Digite a população: %d\n", populacao1);
            scanf("%d", &populacao1);
            printf("Digite a área: %.2f\n", area1);
            scanf("%f", &area1);
            printf("Digite o PIB: %.2f\n", pib1);
            scanf("%f", &pib1);
            printf("Digite o número de pontos turísticos: %d\n", pontosTuristicos1);
            scanf("%d", &pontosTuristicos1);
            // Cálculos
            densidadePopulacional1 = (float)populacao1 / area1;
            pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais por pessoa
            printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
            printf("PIB per Capita: %.2f\n", pibPerCapita1);
            //CARTA 2
            printf("\n--- Cadastro da Carta 2 ---\n");
            printf("Digite o estado: ");
            scanf("%s", estado2);
            printf("Digite o código da carta: ");
            scanf("%s", codigoCarta2);
            printf("Digite o nome da cidade: ");
            scanf("%s", Cidade2);
            printf("Digite a população: %d\n", populacao2);
            scanf("%d", &populacao2);
            printf("Digite a área: %.2f\n", area2);
            scanf("%f", &area2);
            printf("Digite o PIB: %.2f\n", pib2);
            scanf("%f", &pib2);
            printf("Digite o número de pontos turísticos: %d\n", pontosTuristicos2);
            scanf("%d", &pontosTuristicos2);
            // Cálculos
            densidadePopulacional2 = (float)populacao2 / area2;
            pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB em reais por pessoa
            printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
            printf("PIB per Capita: %.2f\n", pibPerCapita2);
                // Comparação de Cartas:
                // Desenvolva a lógica de comparação entre duas cartas.
                //Comparação das cartas

            printf("--- Menu de Comparação ---\n");
            printf("Escolha o primeiro atributo de comparação:\n");
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
                        printf("O atributo escolhido foi a população\n");
                        resultado1 = populacao1 > populacao2 ? 1 : 0;
                        break;
                    case 2:
                        printf("O atributo escolhido foi a área\n");
                        resultado1 = area1 > area2 ? 1 : 0;
                        break;
                    case 3:
                        printf("O atributo escolhido foi o PIB\n");
                        resultado1 = pib1 > pib2 ? 1 : 0;
                        break;
                    case 4:
                        printf("O atributo escolhido foi os pontos turísticos\n");
                        resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
                        break;
                    case 5:
                        printf("O atributo escolhido foi a densidade populacional\n");
                        resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
                        break;
                    case 6:
                        printf("O atributo escolhido foi o PIB per capita\n");
                        resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
                        break;
                    default:
                        printf("Opção inválida!\n");
                    }
            printf("Escolha o segundo atributo de comparação:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("Digite a opção desejada: ");
            scanf("%d", &opcao);

            if (populacao1 == populacao2)
            {
                printf("Você escolheu o mesmo atributo!");
            } else {
                switch (opcao)
                {
                    case 1:
                        printf("O atributo escolhido foi a população\n");
                        resultado2 = populacao1 > populacao2 ? 1 : 0;
                        break;
                    case 2:
                        printf("O atributo escolhido foi a área\n");
                        resultado2 = area1 > area2 ? 1 : 0;
                        break;
                    case 3:
                        printf("O atributo escolhido foi o PIB\n");
                        resultado2 = pib1 > pib2 ? 1 : 0;
                        break;
                    case 4:
                        printf("O atributo escolhido foi os pontos turísticos\n");
                        resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
                        break;
                    case 5:
                        printf("O atributo escolhido foi a densidade populacional\n");
                        resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
                        break;
                    case 6:
                        printf("O atributo escolhido foi o PIB per capita\n");
                        resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
                        break;
                    default:
                        printf("Opção inválida!\n");
                    }
            }
            
            if (resultado1 && resultado2)
            {
                printf("Parabéns, você ganhou!\n");
            } else if (resultado1 != resultado2){
                printf("O jogo empatou!\n");
            } else {
                printf("Que pena, você perdeu!\n");
            }

    return 0;
    }