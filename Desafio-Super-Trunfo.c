#include <stdio.h>

int main() {
    
    printf("Desafio Super Trunfo C - Nivel Aventureiro!\n\n");

    // Declaração de variáveis para a Carta 1
    char Estado1[2]; // Informe o Estado (A-H): 
    char Codigo_da_Carta1[4]; // Ex: A01, B02 (3 caracteres)
    char Nome_da_Cidade1[20]; // Tamanho suficiente para o nome da cidade
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;
    float Densidade_Populacional1;
    float PIB_per_capita1;

    // Declaração de variáveis para a Carta 2
    char Estado2[2];
    char Codigo_da_Carta2[4];
    char Nome_da_Cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_turisticos2;
    float Densidade_Populacional2;
    float PIB_per_capita2;

    printf("--- Cadastro da Carta 1 ---\n");

    printf("Informe o Estado (A-H): ");
    scanf(" %s", Estado1); // O espaço antes de %c consome qualquer caractere de nova linha pendente

    printf("Informe o Código da Carta (Ex: A01): ");
    scanf("%s", Codigo_da_Carta1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", Nome_da_Cidade1); // Lê a linha inteira, incluindo espaços, até o Enter

    printf("Informe a Populacao: ");
    scanf("%d", &Populacao1);

    printf("Informe a Area (em km²): ");
    scanf("%f", &Area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &Pontos_Turisticos1);

    // Calcula Densidade Populacional e PIB per capita para Carta 1
    Densidade_Populacional1 = (float)Populacao1 / Area1;
    PIB_per_capita1 = (PIB1 * 1000000000.00 / Populacao1);

    printf("--- Cadastro da Carta 2 ---\n");

    printf("Informe o Estado (A-H): ");
    scanf(" %s", Estado2); 

    printf("Informe o Código da Carta (Ex: B01): ");
    scanf("%s", Codigo_da_Carta2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", Nome_da_Cidade2); // Lê a linha inteira, incluindo espaços, até o Enter

    printf("Informe a Populacao: ");
    scanf("%d", &Populacao2);

    printf("Informe a Area (em km²): ");
    scanf("%f", &Area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &Pontos_turisticos2);

    // Calcula Densidade Populacional e PIB per capita para Carta 2
    Densidade_Populacional2 = (float)Populacao2 / Area2;
    PIB_per_capita2 = (PIB2 * 1000000000.00 / Populacao2);

    // --- Exibe as Informações das Cartas cadastradas---

    printf("\nCarta 1: \n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1); // .2f para exibir com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita1);

    printf("\nCarta 2: \n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2); 
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", Pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita2);

    return 0; // Indica que o programa terminou com sucesso
}