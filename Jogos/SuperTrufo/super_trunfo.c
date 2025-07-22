#include <stdio.h>

int main() {
    // Carta 1
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;
    char estado1[100], codigo1[4];
    char cidade1[100];

    // Carta 2
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
    char estado2[100], codigo2[4];
    char cidade2[100];

    // --- Cadastro da Carta 1 ---
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em R$): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);
    
    // Calculo da Densidade Populacional
    densidadePopulacional1 = populacao1 / area1;
    // Calculo o PIB per Capita
    pibPerCapita1 = pib1 / populacao1;

    // --- Cadastro da Carta 2 ---
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    
    // Calculo da Densidade Populacional
    densidadePopulacional2 = populacao2 / area2;
    // Calculo o PIB per Capita
    pibPerCapita2 = pib2 / populacao2; // <<< CORREÇÃO: Calculando para a carta 2

    // --- Exibição dos Dados das Cartas ---
    
    // Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s, %s\n", cidade1, estado1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    
    // Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s, %s\n", cidade2, estado2); // <<< ALTERADO para exibir cidade e estado
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}