#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Carta 1
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;
    char estado1[100], codigo1[4];
    //Carta 2
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
    char estado2[100], codigo2[4];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    //codigo da cidade
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    //nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", estado1);
    //população
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    //área da cidade
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    //PIB da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    //pontos turísticos
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);
    //Calculo da Densidade Populacional
    densidadePopulacional1 = populacao1 / area1;
    //Calculo o PIB per Capita
    pibPerCapita1 = pib1 / populacao1;

    //carta 2
    //estado
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    //codigo da cidade
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    //nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", estado2);
    //população
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    //área da cidade
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    //PIB da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    //pontos turísticos
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    //Calculo da Densidade Populacional
    densidadePopulacional2 = populacao2 / area2;
    //Calculo o PIB per Capita
    pibPerCapita1 = pib1 / populacao1;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //carta 1
    printf("\nDados da Carta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    
    //carta 2
    printf("\nDados da Carta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

/*
printf("%formatol formato2 Sformato3", variavell, variavel2, variavel3)

%d: Imprime un número inteiro decimal.
%i: Equivalente a %d.
%f: Imprime un número de ponto flutuante no formato padrão.
%e: Imprime un número de ponto flutuante na notação cientifica.
%c: Imprima un único caractere
%s: Imprime uma cadeia (string) de caracteres.
*/

    return 0;
}