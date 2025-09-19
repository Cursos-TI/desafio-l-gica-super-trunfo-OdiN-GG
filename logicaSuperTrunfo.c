#include <stdio.h>

// Define uma constante para o valor de 1 bilhão para maior clareza
#define BILHAO 1e9

int main() {
    // --- Variáveis da Carta 1 ---
    char estado1[3];
    char codigoCarta1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // --- Variáveis da Carta 2 ---
    char estado2[3];
    char codigoCarta2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // ============================
    //      CADASTRO DA CARTA 1
    // ============================
    // O usuário insere os dados da primeira carta.
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (ex: SP): ");
    scanf("%2s", estado1); // Lê até 2 caracteres para o estado
    while (getchar() != '\n');

    printf("Codigo da Carta (ex: A01): ");
    scanf("%4s", codigoCarta1);
    while (getchar() != '\n');

    printf("Nome da Cidade (sem espacos): ");
    scanf("%49s", nomeCidade1);
    while (getchar() != '\n');

    printf("Populacao: ");
    scanf("%lu", &populacao1);
    while (getchar() != '\n');

    printf("Area (em km2): ");
    scanf("%f", &area1);
    while (getchar() != '\n');

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    while (getchar() != '\n');

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    while (getchar() != '\n');
    printf("\n");

    // ============================
    //      CADASTRO DA CARTA 2
    // ============================
    // O usuário insere os dados da segunda carta.
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Estado (ex: RJ): ");
    scanf("%2s", estado2);
    while (getchar() != '\n');

    printf("Codigo da Carta (ex: B02): ");
    scanf("%4s", codigoCarta2);
    while (getchar() != '\n');

    printf("Nome da Cidade (sem espacos): ");
    scanf("%49s", nomeCidade2);
    while (getchar() != '\n');

    printf("Populacao: ");
    scanf("%lu", &populacao2);
    while (getchar() != '\n');

    printf("Area (em km2): ");
    scanf("%f", &area2);
    while (getchar() != '\n');

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    while (getchar() != '\n');

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    while (getchar() != '\n');

    // ===========================================
    //                 CÁLCULOS
    // ===========================================
    // O programa calcula os atributos derivados para ambas as cartas.

    // Calcula os dados para a Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * BILHAO) / populacao1;

    // Calcula os dados para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * BILHAO) / populacao2;

    // ===========================================
    //        COMPARAÇÃO E RESULTADO
    // ===========================================
    // A escolha do atributo para comparação é feita diretamente no código.
    // Atributo escolhido: População.
    // Regra: Maior valor vence.

    printf("\n\n--- Comparacao de Cartas (Atributo: Populacao) ---\n\n");

    // Exibe os dados das cartas para o atributo escolhido
    printf("Carta 1 - %s (%s): %lu habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", nomeCidade2, estado2, populacao2);
    printf("\n"); // Adiciona uma linha em branco para melhor formatação

    // Lógica de comparação usando if-else para determinar o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Houve um empate!\n");
    }
    
    return 0; // Indica que o programa terminou com sucesso
}
