#include <stdio.h>

int main() {

// Carta número 1
    char estado, codigo[4], nome[20];
    int populacao;
    float area, pib, densidade, per_capita, super_poder;
    int pontos_turisticos;

// Carta número 2
    char estado1, codigo1[4], nome1[20];
    int populacao1;
    float area1, pib1, densidade1, per_capita1, super_poder1;
    int pontos_turisticos1;

// Entrada de dados para a Carta 1
    printf("Digite o estado da primeira cidade: \n");
    scanf(" %c", &estado);
    printf("Digite o codigo da primeira cidade: \n");
    scanf("%s", codigo);
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nome);
    printf("Digite a populacao da primeira cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a area da primeira cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontos_turisticos);

// Cálculos para a Carta 1
    densidade = populacao / area;
    per_capita = pib / populacao;
    super_poder = populacao + area + pib + pontos_turisticos + per_capita + (1 / densidade);

// Entrada de dados para a Carta 2
    printf("Digite o estado da segunda cidade: \n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da segunda cidade: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nome1);
    printf("Digite a populacao da segunda cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a area da segunda cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontos_turisticos1);

// Cálculos para a Carta 2
    densidade1 = populacao1 / area1;
    per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + per_capita1 + (1 / densidade1);

// Comparação do atributo População
    float valor1 = populacao;
    float valor2 = populacao1;

// Determinação do vencedor
    int carta1_vence = valor1 > valor2; // Maior valor vence

// Exibição do resultado
    printf("\nComparacao de cartas (Atributo: Populacao):\n\n");
    printf("Carta 1 - %s (%c): %.0f\n", nome, estado, valor1);
    printf("Carta 2 - %s (%c): %.0f\n", nome1, estado1, valor2);

    if (carta1_vence) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nome);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome1);
    }


return 0;
}
