#include <stdio.h>

int main() {
    char estado1;
    char codigoDaCarta1[4];
    char nomeDaCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int numeroDePontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    printf("Carta 1:\n");
    printf("Digite o estado (uma letra): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (3 caracteres): ");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nomeDaCidade1);
    /* Alternative using fgets:
    fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0';
    */

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeroDePontosTuristicos1);

    superPoder1 = (double)((double)populacao1 + area1 + pib1 + (double)numeroDePontosTuristicos1 + pibPerCapita1)/densidadePopulacional1;

    char estado2;
    char codigoDaCarta2[4];
    char nomeDaCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int numeroDePontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    
    printf("\nCarta 2:\n");
    printf("Digite o estado (uma letra): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (3 caracteres): ");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeroDePontosTuristicos2);

    superPoder2 = (double)((double)populacao2 + area2 + pib2 + (double)numeroDePontosTuristicos2 + pibPerCapita2)/densidadePopulacional2;

    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", numeroDePontosTuristicos1);
    printf("Densidade Populacional: %.2f Hab/km²\n", (float)populacao1 / area1);
    printf("PIB per Capita: %.2f reais\n", pib1 / populacao1);


    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f Hab/km²\n", (float)populacao2 / area2);
    printf("PIB per Capita: %.2f reais\n", pib2 / populacao2);

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %s venceu\n", (populacao1 > populacao2) ? codigoDaCarta1 : (populacao1 < populacao2) ? codigoDaCarta2 : "Empate");
    printf("Area: Carta %s venceu\n", (area1 > area2) ? codigoDaCarta1 : (area1 < area2) ? codigoDaCarta2 : "Empate");
    printf("PIB: Carta %s venceu\n", (pib1 > pib2) ? codigoDaCarta1 : (pib1 < pib2) ? codigoDaCarta2 : "Empate");
    printf("Numero de Pontos Turisticos: Carta %s venceu\n", (numeroDePontosTuristicos1 > numeroDePontosTuristicos2) ? codigoDaCarta1 : (numeroDePontosTuristicos1 < numeroDePontosTuristicos2) ? codigoDaCarta2 : "Empate");
    printf("Super Poder: Carta %s venceu\n", (superPoder1 > superPoder2) ? codigoDaCarta1 : (superPoder1 < superPoder2) ? codigoDaCarta2 : "Empate");
    printf("Densidade Populacional: Carta %s venceu\n", ((float)populacao1 / area1 > (float)populacao2 / area2) ? codigoDaCarta2 : ((float)populacao1 / area1 < (float)populacao2 / area2) ? codigoDaCarta1 : "Empate");
    printf("PIB per Capita: Carta %s venceu\n", (pib1 / populacao1 > pib2 / populacao2) ? codigoDaCarta1 : (pib1 / populacao1 < pib2 / populacao2) ? codigoDaCarta2 : "Empate");

    return 0;

}