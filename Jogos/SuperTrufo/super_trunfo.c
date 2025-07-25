#include <stdio.h>
    int main() {
    // --- Variáveis para a Carta 1 ---
        char estado1;
        char codigoCarta1[5];
        char nomeCidade1[50];
        int populacao1;
        float area1;
        float pib1; // Em bilhões
        int pontosTuristicos1;
        float densidade1;
        float pibPerCapita1;
        float superpoder1;
        // --- Variáveis para a Carta 2 ---
        char estado2;
        char codigoCarta2[5];
        char nomeCidade2[50];
        int populacao2;
        float area2;
        float pib2; // Em bilhões
        int pontosTuristicos2;
        float densidade2; 
        float pibPerCapita2;
        float superpoder2;

            // --- Leitura dos dados da Carta 1 ---
            printf("--- Cadastro da Carta 1 ---\n");
            printf("Digite o estado: ");
            scanf(" %c", &estado1);
            printf("Digite o código da carta: ");
            scanf("%s", codigoCarta1);
            printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", nomeCidade1);
            printf("Digite a população: ");
            scanf("%d", &populacao1);
            printf("Digite a área (em km²): ");
            scanf("%f", &area1);
            printf("Digite o PIB (em bilhões de reais): ");
            scanf("%f", &pib1);
            printf("Digite o número de pontos turísticos: ");
            scanf("%d", &pontosTuristicos1);

                // --- Cálculos para a Carta 1 ---
                // Densidade = População / Área
                densidade1 = (float)populacao1 / area1;
                // PIB per Capita = (PIB em unidades * 1 bilhão) / População
                pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;
                //superpoder
                superpoder1 =(float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

            // --- Leitura dos dados da Carta 2 ---
            printf("--- Cadastro da Carta 2 ---\n");
            printf("Digite o estado: ");
            scanf(" %c", &estado2);
            printf("Digite o código da carta: ");
            scanf("%s", codigoCarta2);
            printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", nomeCidade2);
            printf("Digite a população: ");
            scanf("%d", &populacao2);
            printf("Digite a área (em km²): ");
            scanf("%f", &area2);
            printf("Digite o PIB (em bilhões de reais): ");
            scanf("%f", &pib2);
            printf("Digite o número de pontos turísticos: ");
            scanf("%d", &pontosTuristicos2);

                // --- Cálculos para a Carta 2 ---
                // Densidade = População / Área
                densidade2 = (float)populacao2 / area2;
                // PIB per Capita = (PIB em unidades * 1 bilhão) / População
                pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;
                // Super Poder
                superpoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

            printf("\n\n--- Cartas Cadastradas com Cálculos ---\n\n");

            // --- Exibição completa dos dados da Carta 1 ---
            printf("Carta 1:\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", codigoCarta1);
            printf("Nome da Cidade: %s\n", nomeCidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f bilhões de reais\n", pib1);
            printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
            // Exibindo os novos dados calculados
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

            printf("\n");

            // --- Exibição completa dos dados da Carta 2 ---
            printf("Carta 2:\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", codigoCarta2);
            printf("Nome da Cidade: %s\n", nomeCidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
            // Exibindo os novos dados calculados
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

                // --- Seção de Comparação ---
            printf("\n\n--- Comparação de Cartas ---\n");

    // Para cada comparação, o resultado da expressão booleana (ex: populacao1 > populacao2)
    // é convertido para um inteiro: 1 (verdadeiro) ou 0 (falso).

            // Maior população vence
            printf("População: Carta %d venceu (%d)\n", 2 - (populacao1 > populacao2), (populacao1 > populacao2));
            // Maior área vence
            printf("Área: Carta %d venceu (%d)\n", 2 - (area1 > area2), (area1 > area2));
            // Maior PIB vence 
            printf("PIB: Carta %d venceu (%d)\n", 2 - (pib1 > pib2), (pib1 > pib2));
            // Mais pontos turísticos vence
            printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - (pontosTuristicos1 > pontosTuristicos2), (pontosTuristicos1 > pontosTuristicos2));
            // MENOR densidade populacional vence (regra especial)
            printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - (densidade1 < densidade2), (densidade1 < densidade2));
            // Maior PIB per capita vence [cite: 1210]
            printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - (pibPerCapita1 > pibPerCapita2), (pibPerCapita1 > pibPerCapita2));
            // Maior Super Poder vence [cite: 1210]
            printf("Super Poder: Carta %d venceu (%d)\n", 2 - (superpoder1 > superpoder2), (superpoder1 > superpoder2));

    return 0;
}