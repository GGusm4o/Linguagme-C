#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
    int main(){
        // Definição das variáveis para armazenar as propriedades das cidades
        int opcao;
        //Carta 1
        char estado1[3];
        char codigoCarta1[5];
        char Cidade1[50];
        int populacao1 = 12325000;
        float area1 = 1521.11; // Em km²
        float pib1 = 699.28; // Em bilhões
        int pontosTuristicos1 = 50;
        float densidadePopulacional1 ;
        float pibPerCapita1;
        // Carta 2
        char estado2[3];
        char codigoCarta2[5];
        char Cidade2[50];
        int populacao2 = 6748000;
        float area2 = 1200.25; //Em km²
        float pib2 = 300.50; // Em bilhões
        int pontosTuristicos2 = 30;
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
            //scanf("%d", &populacao1);
            printf("Digite a área: %.2f\n", area1);
            //scanf("%f", &area1);
            printf("Digite o PIB: %.2f\n", pib1);
            //scanf("%f", &pib1);
            printf("Digite o número de pontos turísticos: %d\n", pontosTuristicos1);
            //scanf("%d", &pontosTuristicos1);
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
            //scanf("%d", &populacao2);
            printf("Digite a área: %.2f\n", area2);
            //scanf("%f", &area2);
            printf("Digite o PIB: %.2f\n", pib2);
            //scanf("%f", &pib2);
            printf("Digite o número de pontos turísticos: %d\n", pontosTuristicos2);
            //scanf("%d", &pontosTuristicos2);
            // Cálculos
            densidadePopulacional2 = (float)populacao2 / area2;
            pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB em reais por pessoa
            printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
            printf("PIB per Capita: %.2f\n", pibPerCapita2);
                // Comparação de Cartas:
                // Desenvolva a lógica de comparação entre duas cartas.
                //Comparação das cartas
  
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
                        printf("O atributo usado foi a população\n");
                        if (populacao1 > populacao2)
                        {
                            printf("Carta 1 venceu %s\n", Cidade1);
                            printf("A população é de: %d\n", populacao1);
                        } else if (populacao2 > populacao1)
                        {
                            printf("Carta 2 venceu %s\n", Cidade2);
                            printf("A população é de: %d\n", populacao2);
                        } else 
                        {
                            printf("Deu empate!\n");
                        }
                        break;
                    case 2:
                        printf("O atributo usado foi a área\n");
                        if (area1 > area2)
                        {
                            printf("Carta 1 venceu %s\n", Cidade1);
                            printf("A área é de: %.2f\n", area1);
                        } else if (area2 > area1){
                            printf("Carta 2 venceu %s\n", Cidade2);
                            printf("A área é de: %.2f\n", area2);
                        } else 
                        {
                            printf("Deu empate!\n");
                        }
                        break;
                    case 3:
                        printf("O atributo usado foi o PIB\n");
                        if (pib1 > pib2)
                        {
                            printf("Carta 1 venceu %s\n", Cidade1);
                            printf("O PIB é de: %.2f\n", pib1);
                        } else if (pib2 > pib1)
                        {
                            printf("Carta 2 venceu %s\n", Cidade2);
                            printf("O PIB é de: %.2f\n", pib2);
                        } else 
                        {
                            printf("Deu empate!\n");
                        }
                        break;
                    case 4:
                        printf("O atributo usado foi os pontos turísticos\n");
                        if (pontosTuristicos1 > pontosTuristicos2)
                        {
                            printf("Carta 1 venceu %s\n", Cidade1);
                            printf("O número de pontos turísticos é de: %d\n", pontosTuristicos1);
                        } else if (pontosTuristicos2 > pontosTuristicos1){
                            printf("Carta 2 venceu %s\n", Cidade2);
                        } else {
                            printf("Deu impate!\n");
                        }
                        break;
                    case 5:
                        printf("O atributo usado foi a densidade populacional\n");
                        if (densidadePopulacional1 < densidadePopulacional2)
                        {
                            printf("Carta 1 venceu %s\n", Cidade1);
                            printf("A densidade populacional é de: %.2f\n");
                        } else if (densidadePopulacional2 < densidadePopulacional1) 
                        {
                            printf("Carta 2 venceu %s\n", Cidade2);
                            printf("A densidade populacional é de: %.2f\n");
                        } else 
                        {
                            printf("Deu empate!\n");
                        }
                        break;
                    case 6:
                        printf("O atributo usado foi o PIB per capita\n");
                        if (pibPerCapita1 > pibPerCapita2)
                        {
                            printf("Carta 1 venceu %s\n", Cidade1);
                            printf("O PIB per capita é de: %.2f\n");
                        } else if (pibPerCapita2 > pibPerCapita1)
                        {
                            printf("Carta 2 venceu %s\n", Cidade2);
                            printf("O PIB per capita é de: %.2f\n");
                        } else 
                        {
                            printf("Deu empate!\n");
                        }
                        break;
                    default:
                        printf("Opção inválida!\n");
                    }

    return 0;
    }