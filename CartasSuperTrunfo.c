#include <stdio.h>

// Desafio Super Trunfo
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

// Definindo as variaveis para a primeira carta:

char estado;
char codigo[4];
char nome[15];
int populacao;
float area;
float pib;
int pontos_turisticos;
float densidade;
float per_capita;
float super_poder;

// Funçoes para receber os valores das variaveis da primeira carta:
    
    printf("digite o estado da primeira cidade: ");
    scanf("%c", &estado);

    printf("digite o codigo da primeira cidade: ");
    scanf("%s", codigo);

    printf("digite o nome da primeira cidade: ");
    scanf("%s", nome);

    printf("digite a populacao da primeira cidade: ");
    scanf("%d", &populacao);

    printf("digite a area da primeira cidade: ");
    scanf("%f", &area);

    printf("digite o pib da primeira cidade: ");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos);

//Calculo da densidade e renda per capita da primeira carta:    
    densidade = populacao / area;
    per_capita = populacao / pib;
    super_poder = populacao + area + pib + pontos_turisticos + per_capita + (1 / densidade);

// Definindo as variaveis da segunda carta:

char estado1;
char codigo1[4];
char nome1[15];
int populacao1;
float area1;
float pib1;
int pontos_turisticos1;
float densidade1;
float per_capita1;
float super_poder1;


// Funçoes para receber os valores das variaveis da segunda carta:

    printf("digite o estado da segunda cidade: ");
    scanf(" %c", &estado1);

    printf("digite o codigo da segunda cidade: ");
    scanf("%s", codigo1);

    printf("digite o nome da segunda cidade: ");
    scanf("%s", nome1);

    printf("digite a populacao da segunda cidade: ");
    scanf("%d", &populacao1);

    printf("digite a area da segunda cidade: ");
    scanf("%f", &area1);

    printf("digite o pib da segunda cidade: ");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turisticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos1);

//Calculo da densidade e renda per capita da segunda carta:
    densidade1 = populacao1 / area1;
    per_capita1 = populacao1 / pib1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + per_capita1 + (1 / densidade1);

// Imprimindo as informacoes das cartas de acordo com os valores do usuario:

printf("CARTA 1\n");
printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", nome);
printf("Populacao: %d\n", populacao);
printf("Area Km2: %.2f\n", area);
printf("PIB: %.2f\n", pib);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos);
printf("Densidade populacional: %.2f\n", densidade);
printf("Renda per capita: %.2f\n", per_capita);
printf("Super Poder: %.2f\n", super_poder);


printf("CARTA 2:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", nome1);
printf("Populacao: %d\n", populacao1);
printf("Area Km2: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
printf("Densidade populacional: %.2f\n", densidade1);
printf("Renda per capita: %.2f\n", per_capita1);
printf("Super Poder: %.2f\n", super_poder1);

    
// Comparacao de cartas:
printf("\n***COMPARACOES:***\n");

// Comparação de densidade populacional (menor vence)
printf("Densidade populacional (Carta 1 vence): %d\n", densidade < densidade1);

// Comparação de PIB per capita (maior vence)
printf("PIB per capita (Carta 1 vence): %d\n", per_capita < per_capita1);

// Comparação de população (maior vence)
printf("Populacao (Carta 1 vence): %d\n", populacao > populacao1);

// Comparação de área (maior vence)
printf("Area (Carta 1 vence): %d\n", area > area1);

// Comparação de PIB (maior vence)
printf("PIB (Carta 1 vence): %d\n", pib > pib1);

// Comparação de pontos turísticos (maior vence)
printf("Pontos turisticos (Carta 1 vence): %d\n", pontos_turisticos > pontos_turisticos1);

// Comparação de Super Poder (maior vence)
printf("Super Poder (Carta 1 vence): %d\n", super_poder > super_poder1);


return 0;
}
