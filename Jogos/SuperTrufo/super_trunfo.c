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
    float densidade1; // Novo campo calculado
    float pibPerCapita1; // Novo campo calculado

    // --- Variáveis para a Carta 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2; // Em bilhões
    int pontosTuristicos2;
    float densidade2; // Novo campo calculado
    float pibPerCapita2; // Novo campo calculado

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
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;


    printf("\n");

    // --- Leitura dos dados da Carta 2 ---
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
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
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;


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


    return 0;
}