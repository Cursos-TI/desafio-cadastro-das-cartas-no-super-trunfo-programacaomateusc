#include <stdio.h>

int main() {
    printf ("Desafio super trunfo:\n");
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float pibpercapto1;
    double superpoder1;

    
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float pibpercapto2;
    double superpoder2;


    

    printf("Digite os dados da carta1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (exemplo: A01): ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área da cidade: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Digite os dados da carta2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (exemplo: A01): ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área da cidade: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

pibpercapto1 = pib1 / populacao1;
densidadepopulacional1 = populacao1 / area1;


pibpercapto2 = pib2 / populacao2;
densidadepopulacional2 = populacao2 / area2;

superpoder1 = (double)pontosTuristicos1 + (double)populacao1 + (double)pib1 + (double)pibpercapto1 + (double)area1 + (double)densidadepopulacional1 / 1;
superpoder2 = (double)pontosTuristicos2 + (double)populacao2 + (double)pib2 + (double)pibpercapto2 + (double)area2 + (double)densidadepopulacional2 / 1;


    printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
printf("A densidade poluacional e: %.2f\n", densidadepopulacional1);
printf("o pib percapto e: %.2f\n", pibpercapto1);
printf("o super poder é: %.2f\n", superpoder1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
printf("A densidade poluacional e: %.2f\n", densidadepopulacional2);
printf("o pib percapto e: %.2f\n", pibpercapto2);
printf("o super poder é: %.2f\n", superpoder2);

printf("A carta vencedora é: %d\n", superpoder1 > superpoder2);


    return 0;
}