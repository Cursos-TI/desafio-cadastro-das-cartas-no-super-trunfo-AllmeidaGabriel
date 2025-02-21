#include <stdio.h>

int main() {
    char codestado_1;
    char codccidade_1[3]; // Tamanho 3 para garantir espaço para '\0'
    char cidade_1[50];
    int populacao_1, turistico_1;
    float area_1, pib_1;

    printf("Digite os dados da Carta 01! \n");

    printf("Digite o código do estado da cidade (Letra A-H): \n");
    scanf(" %c", &codestado_1);

    printf("Digite o código da cidade (Número 01-09): \n");
    scanf(" %2s", codccidade_1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade_1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade em bilhões: \n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turistico_1);

    // Segunda carta
    char codestado_2;
    char codccidade_2[3];
    char cidade_2[50];
    int populacao_2, turistico_2;
    float area_2, pib_2;

    printf("\nAgora vamos para a próxima carta! \n");

    printf("Digite o código do estado da cidade 2 (Letra A-H): \n");
    scanf(" %c", &codestado_2);

    printf("Digite o código da cidade 2 (Número 01-09): \n");
    scanf(" %2s", codccidade_2);

    printf("Digite o nome da cidade 2: \n");
    scanf(" %[^\n]", cidade_2);

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao_2);

    printf("Digite a área da cidade 2 em km²: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade 2 em bilhões: \n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos da cidade 2: \n");
    scanf("%d", &turistico_2);

    // Exibição dos dados
    printf("\n===== DADOS CADASTRADOS =====\n");

    printf("\n--- CARTA 1 ---\n");
    printf("Código do Estado: %c\n", codestado_1);
    printf("Código da Cidade: %s\n", codccidade_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População da Cidade: %d\n", populacao_1);
    printf("Área da Cidade: %.2f km²\n", area_1);
    printf("PIB da Cidade: %.2f bilhões\n", pib_1);
    printf("Pontos Turísticos da Cidade: %d\n", turistico_1);

    printf("\n--- CARTA 2 ---\n");
    printf("Código do Estado: %c\n", codestado_2);
    printf("Código da Cidade: %s\n", codccidade_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População da Cidade: %d\n", populacao_2);
    printf("Área da Cidade: %.2f km²\n", area_2);
    printf("PIB da Cidade: %.2f bilhões\n", pib_2);
    printf("Pontos Turísticos da Cidade: %d\n", turistico_2);

    return 0;
}