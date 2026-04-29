#include <stdio.h>

int main(  ) {

    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    printf("Digite a letra do Estado (de A a H) da primeira Carta: \n");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da primeira Carta: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da Cidade da primeira Carta: \n");
    scanf("%s", nome_cidade1);

    printf("Digite a Populacao (numero de habitantes) da Cidade da primeira Carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em quilometros quadrados da Cidade da primeira Carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da Cidade da primeira Carta: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Cidade da primeira Carta: \n");
    scanf("%d", &pontos_turisticos1);
    

    printf("\nDigite a letra do Estado (de A a H) da segunda Carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da segunda Carta: \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da Cidade da segunda Carta: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a Populacao (numero de habitantes) da Cidade da segunda Carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em quilometros quadrados da Cidade da segunda Carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da Cidade da segunda Carta: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Cidade da segunda Carta: \n");
    scanf("%d", &pontos_turisticos2);


    printf("\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\n", estado1, codigo_carta1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1);
    printf("\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\n", estado2, codigo_carta2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2);

    return 0;

}