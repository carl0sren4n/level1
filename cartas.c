#include <stdio.h>

int main(){

    //Carta 01 *Entrada de dados*
    char estado1[2];
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int ponturisticos1;

    //Carta 02 *Entrada de dados*
    char estado2[2];
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int ponturisticos2;

    printf("Estado:");
    scanf("%s", estado1);

    printf("Codigo:");
    scanf("%s", codigo1);

    printf("Nome da cidade:");
    scanf("%s", cidade1);

    printf("Populacao:");
    scanf("%i", &populacao1);

    printf("Area:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Numeros de Pontos Turisticos:");
    scanf("%i", &ponturisticos1);

    //Carta 02 *Entrada de dados*
    
    printf("Estado:");
    scanf("%s", estado2);

    printf("Codigo:");
    scanf("%s", codigo2);

    printf("Nome da cidade:");
    scanf("%s", cidade2);

    printf("Populacao:");
    scanf("%i", &populacao2);

    printf("Area:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Numeros de Pontos Turisticos:");
    scanf("%i", &ponturisticos2);

    //Saida de dados Carta 01
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %i\n", populacao1);
    printf("Area: %.3f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Numeros de Pontos Turisticos: %i\n", ponturisticos1);

    //Saida de dados Carta 02
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Numeros de Pontos Turisticos: %i\n", ponturisticos2);

    return 0;
}