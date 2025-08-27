#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
     // Carta 1
    char estado1[3];
    char codigo_carta1[20];
    char nome1[20];
    long int populacao1;
    float area1;
    float pib1;
    int numero_pontos_turisticos1;
    float desidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Carta 2
    char estado2[3];
    char codigo_carta2[20];
    char nome2[20];
    long int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float desidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

        // Cadastro Carta 1
    printf("Digite a sigla do estado da Carta 1: ");
    scanf("%s", estado1);
    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo_carta1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", &nome1);
    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da Carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &numero_pontos_turisticos1);
    // calculando variaveis
    desidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + numero_pontos_turisticos1 + pib_per_capita1 + (1 / desidade_populacional1);

    // Cadastro Carta 2
    printf("Digite a sigla do estado da Carta 2: ");
    scanf("%s", estado2);
    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo_carta2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", &nome2);
    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &numero_pontos_turisticos2);
    // calculando variaveis
    desidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + (1 / desidade_populacional2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %'ld\n", nome1, codigo_carta1, populacao1 );
    printf("Carta 2 - %s (%s): %'ld\n", nome2, codigo_carta2, populacao2 );
    if(populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!", nome1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!", nome2);
    }
    return 0;
}
