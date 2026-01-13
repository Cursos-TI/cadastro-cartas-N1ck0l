#include <stdio.h>

int main() {
    char estado1;
    char codigoDaCarta1[4];
    char nomeDaCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int numeroDePontosTuristicos1;

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


    char estado2;
    char codigoDaCarta2[4];
    char nomeDaCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int numeroDePontosTuristicos2;

    
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


    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", numeroDePontosTuristicos1);


    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numeroDePontosTuristicos2);

    return 0;

}