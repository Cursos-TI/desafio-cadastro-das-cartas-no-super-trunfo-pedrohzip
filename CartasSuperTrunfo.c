#include <stdio.h>
#include <string.h>

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

    // Menu interativo
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Renda per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    // Variáveis para armazenar os valores comparados
    float valor1 = 0, valor2 = 0;
    char atributo[30];

    // Lógica de comparação com base na escolha do usuário
    switch (opcao) {
        case 1:
            valor1 = populacao;
            valor2 = populacao1;
            strcpy(atributo, "População");
            break;
        case 2:
            valor1 = area;
            valor2 = area1;
            strcpy(atributo, "Área");
            break;
        case 3:
            valor1 = pib;
            valor2 = pib1;
            strcpy(atributo, "PIB");
            break;
        case 4:
            valor1 = pontos_turisticos;
            valor2 = pontos_turisticos1;
            strcpy(atributo, "Número de pontos turísticos");
            break;
        case 5:
            valor1 = densidade;
            valor2 = densidade1;
            strcpy(atributo, "Densidade Demográfica");
            break;
        case 6:
            valor1 = per_capita;
            valor2 = per_capita1;
            strcpy(atributo, "Renda per capita");
            break;
        case 7:
            valor1 = super_poder;
            valor2 = super_poder1;
            strcpy(atributo, "Super Poder");
            break;
        default:
            printf("Opção inválida! Encerrando o programa.\n");
            return 1;
    }

    // Determinação do vencedor
    int carta1_vence;
    if (opcao == 5) { // Regra especial para Densidade Demográfica (menor vence)
        carta1_vence = valor1 < valor2;
    } else { // Regra geral (maior vence)
        carta1_vence = valor1 > valor2;
    }

    // Exibição do resultado
    printf("\nComparação de cartas (Atributo: %s):\n\n", atributo);
    printf("Carta 1 - %s (%c): %.2f\n", nome, estado, valor1);
    printf("Carta 2 - %s (%c): %.2f\n", nome1, estado1, valor2);

    if (valor1 == valor2) {
        printf("\nResultado: Empate!\n");
    } else if (carta1_vence) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nome);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome1);
    }

    return 0;
}