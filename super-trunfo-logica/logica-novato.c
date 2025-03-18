#include <stdio.h>

int main() {
    char codestado_1;
    char codccidade_1[3]; // Tamanho 3 para garantir espaço para '\0'
    char cidade_1[50];
    int populacao_1, turistico_1;
    float area_1, pib_1;
    float densidade_1;
    float pibcarpita_1;
    float superpoder_1;

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

    densidade_1 = (float) populacao_1 / area_1;
    pibcarpita_1 = (float) (pib_1 * 1e9) / populacao_1;

    superpoder_1 = (float) populacao_1 + area_1 + pib_1 + turistico_1 + pibcarpita_1 + densidade_1;

    
    // Segunda carta
    char codestado_2;
    char codccidade_2[3];
    char cidade_2[50];
    int populacao_2, turistico_2;
    float area_2, pib_2;
    float densidade_2;
    float pibcarpita_2;
    float superpoder_2;

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

    densidade_2 = (float) populacao_2 / area_2;
    pibcarpita_2 = (float) (pib_2 * 1e9) / populacao_2;
    superpoder_2 = (float) populacao_2 + area_2 + pib_2 + turistico_2 + pibcarpita_2 + densidade_2;

    
    // Exibição dos dados

    printf("\n===== DADOS CADASTRADOS =====\n");

    printf("\n--- CARTA 1 ---\n");
    printf("Código do Estado: %c\n", codestado_1);
    printf("Código da Cidade: %s\n", codccidade_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População da Cidade: %d\n", populacao_1);
    printf("Área da Cidade: %.2f km²\n", area_1);
    printf("PIB da Cidade: %.2f bilhões de reais\n", pib_1);
    printf("Pontos Turísticos da Cidade: %d\n", turistico_1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_1);
    printf("PIB per Capita: %.2f reais \n", pibcarpita_1);
    printf("Super Poder é: %.20f \n", superpoder_1);

    printf("\n--- CARTA 2 ---\n");
    printf("Código do Estado: %c\n", codestado_2);
    printf("Código da Cidade: %s\n", codccidade_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População da Cidade: %d\n", populacao_2);
    printf("Área da Cidade: %.2f km²\n", area_2);
    printf("PIB da Cidade: %.2f bilhões de reais\n", pib_2);
    printf("Pontos Turísticos da Cidade: %d\n", turistico_2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_2);
    printf("PIB per Capita: %.2f reais \n", pibcarpita_2);
    printf("Super Poder é: %.20f \n", superpoder_2);

    // resultado das cartas

    printf("\n*** Comparação das Cartas **** \n");

    printf("\n*** Comparação das Cartas **** \n");
    printf("População: %s\n", (populacao_1 > populacao_2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Área: %s\n", (area_1 > area_2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB: %s\n", (pib_1 > pib_2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Pontos Turísticos: %s\n", (turistico_1 > turistico_2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Densidade Populacional: %s\n", (densidade_1 < densidade_2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB per Capita: %s\n", (pibcarpita_1 > pibcarpita_2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Super Poder: %s\n", (superpoder_1 > superpoder_2) ? "Carta 1 venceu" : "Carta 2 venceu");

    //escolha do atributo
    printf("\n*** Resultado das Cartas ***\n");

    if (populacao_1 > populacao_2) {
        printf("População : A carta 1 é maior que a população da carta 2\n");
    } else {
        printf ("População : A carta 2 é maior que a população da carta 1\n");
    }

    if (area_1 > area_2) {
        printf("Área : A carta 1 é maior que a área da carta 2\n");   
    } else {
        printf("Área : A carta 2 é maior que a área da carta 1\n");
    }
    
    if (pib_1 > pib_1) {
        printf("PIB : A carta 1 é maior que a área da carta 2\n");   
    } else {
        printf("PIB : A carta 2 é maior que a área da carta 1\n");
    }

    if (turistico_1 > turistico_2) {
        printf("Pontos Turisticos : A carta 1 é maior que a área da carta 2\n");   
    } else {
        printf("Pontos Turisticos : A carta 2 é maior que a área da carta 1\n");
    }
    
    if (densidade_1 > densidade_2) {
        printf("Densidade : A carta 1 é maior que a área da carta 2\n");   
    } else {
        printf("Densidade : A carta 2 é maior que a área da carta 1\n");
    }

    if (pibcarpita_1 > pibcarpita_2) {
        printf("PIB Per capita : A carta 1 é maior que a área da carta 2\n");   
    } else {
        printf("PIB Per capita : A carta 2 é maior que a área da carta 1\n");
    }
    if (superpoder_1 > superpoder_2) {
        printf("Super Poder : A carta 1 é maior que a área da carta 2\n");   
    } else {
        printf("Super Poder : A carta 2 é maior que a área da carta 1\n");
    }

    
    return 0;
}