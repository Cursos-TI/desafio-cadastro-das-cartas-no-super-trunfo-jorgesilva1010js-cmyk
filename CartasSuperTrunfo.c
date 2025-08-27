#include <stdio.h>

int main(int argc, char const *argv[])
{
    char carta1 [20] = "carta1";
    char estado [20] = "estado";
    char codigocidade [20] = "A1";
    char nomecidade [20] = "nome";
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf("Carta1 \n");

    printf("Informe o estado: ");
    scanf("%s", &estado);
   //printf("O estado é: %s\n" estado);


    printf("Informe o código da cidade: ");
    scanf("%s", &codigocidade);
    //printf("O código da cidade é: %s\n", codigocidade);

    printf("Informe o nome da cidade: ");
    scanf("%s", &nomecidade);
    //printf("O nome da cidade é: %s\n", nomecidade);

    printf("Informe a populacao: ");
    scanf("%d", &populacao);
   // printf("População total é: %d\n", populacao);

    printf("Informe a área: ");
    scanf("%f", &area);
    //printf("A área toal é: %f\n", area);

    printf("Informe o PIB: ");
    scanf("%f", &PIB);
    //printf("A área toal é: %f\n", PIB);

    printf("Informe o número de pontos turisticos: ");
    scanf("%d", &pontosturisticos);
    //printf("População total é: %d\n", pontosturisticos);
  
    printf("Carta 1: %s\n - estado: %d\n - codigocidade: %s\n - nomecidade: %s\n", carta1, estado, codigocidade, nomecidade);
    printf(" - populacao: %d\n - area: %f\n - PIB: %f\n - pontosturisticos: %d", populacao, area, PIB, pontosturisticos);


    return 0;

}