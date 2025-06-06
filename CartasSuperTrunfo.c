#include <stdio.h>

// Desafio Super Trunfo - Nível Novato
// Tema: Cadastro de Cartas de Cidades (sem estruturas condicionais ou de repetição)

int main()
{
    // === Declaração das variáveis para a primeira carta ===
    char estado1;          // Letra do estado (A a H)
    char codigo1[4];       // Código da carta (ex: A01)
    char cidade1[30];      // Nome da cidade (sem espaços)
    int populacao1;        // Número de habitantes
    float area1;           // Área da cidade em km²
    float pib1;            // Produto Interno Bruto em bilhões
    int pontosTuristicos1; // Quantidade de pontos turísticos

    // === Declaração das variáveis para a segunda carta ===
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // === Coleta dos dados da primeira carta ===
    printf("\n=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // o espaço antes do %c evita leitura de enter residual

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1); // lê string simples (sem espaços)

    printf("Nome da cidade (sem espaços): ");
    scanf("%s", cidade1);

    printf("População da cidade: ");
    scanf("%d", &populacao1);

    printf("Área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // === Coleta dos dados da segunda carta ===
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade (sem espaços): ");
    scanf("%s", cidade2);

    printf("População da cidade: ");
    scanf("%d", &populacao2);

    printf("Área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // === Exibição dos dados cadastrados ===
    printf("\n=== DADOS DAS CARTAS CADASTRADAS ===\n");

    // Informações da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Informações da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; // Fim do programa
}
