#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Escolhas
    int escolha1;
    int escolha2;
    // Resultados
    double resultadoCarta1 = 0.0;
    double resultadoCarta2 = 0.0;
    // Atributos
    char atributo1[30] = "População";
    char atributo2[30] = "Àrea";
    char atributo3[30] = "PIB";
    char atributo4[30] = "Número de Pontos Turíticos";
    char atributo5[30] = "Densidade Demográfica";

    // Carta 1
    char nomePais1[30] = "Brasil";
    long int populacao1 = 213421037;
    double area1 = 55767.049;
    unsigned long pib1 = 2794100000;
    int numero_pontos_turisticos1 = 20;
    float densidade_populacional1 = 16.92;
    // Carta 2
    char nomePais2[30] = "Argentina";
    long int populacao2 = 470700000;
    double area2 = 2780400.0;
    unsigned long pib2 = 6370000000;
    int numero_pontos_turisticos2 = 20;
    float densidade_populacional2 = 16.92;

    // Escolha dos atributos
    printf("### Super Trunfo Países ###\n");
    printf("Atributos\n");
    printf("1. %s\n", atributo1);
    printf("2. %s\n", atributo2);
    printf("3. %s\n", atributo3);
    printf("4. %s\n", atributo4);
    printf("5. %s\n", atributo5);
    printf("Escolha o Primeiro Atributo:\n");
    scanf("%d", &escolha1);

    // Validação de escolha inválida do primeiro atributo
    if (escolha1 < 1 || escolha1 > 5)
    {
        printf("Opção inválida! O programa será encerrado.\n");
        return 0;
    }

    printf("Escolha o Segundo Atributo (Deve ser diferente do primeiro):\n");
    scanf("%d", &escolha2);

        // Validação e tratamento de escolha inválida ou duplicada do segundo atributo
    if (escolha2 < 1 || escolha2 > 5 || escolha1 == escolha2) {
        printf("Opção inválida ou repetida! O programa será encerrado.\n");
        return 0;
    }

    // Países
    printf("%s vs %s\n", nomePais1, nomePais2);

    // Coletando a escolha 1 do jogador
    switch (escolha1)
    {
    case 1:
        printf("Atributo 1 você escolheu: %s\n", atributo1);
        printf("%s: %ld - %s: %ld\n", nomePais1, populacao1, nomePais2, populacao2);
        resultadoCarta1 += (double)populacao1;
        resultadoCarta2 += (double)populacao2;
        break;
    case 2:
        printf("Atributo 1 você escolheu: %s\n", atributo2);
        printf("%s: %.2f - %s: %.2f\n", nomePais1, area1, nomePais2, area2);
        resultadoCarta1 += area1;
        resultadoCarta2 += area2;
        break;
    case 3:
        printf("Atributo 1 você escolheu: %s\n", atributo3);
        printf("%s: %ld - %s: %ld\n", nomePais1, pib1, nomePais2, pib2);
        resultadoCarta1 += pib1;
        resultadoCarta2 += pib2;
        break;
    case 4:
        printf("Atributo 1 você escolheu: %s\n", atributo4);
        printf("%s: %d - %s: %d\n", nomePais1, numero_pontos_turisticos1, nomePais2, numero_pontos_turisticos2);
        resultadoCarta1 += numero_pontos_turisticos1;
        resultadoCarta2 += numero_pontos_turisticos2;
        break;
    case 5:
        printf("Atributo 1 você escolheu: %s\n", atributo5);
        printf("%s: %.2f - %s: %.2f\n", nomePais1, densidade_populacional1, nomePais2, densidade_populacional2);
        resultadoCarta1 += 1.0 / densidade_populacional1;
        resultadoCarta2 += 1.0 / densidade_populacional2;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    // Coletando a escolha 2 do jogador
        switch (escolha2)
        {
        case 1:
            printf("Atributo 2 você escolheu: %s\n", atributo1);
            printf("%s: %ld - %s: %ld\n", nomePais1, populacao1, nomePais2, populacao2);
            resultadoCarta1 += (double)populacao1;
            resultadoCarta2 += (double)populacao2;
            break;
        case 2:
            printf("Atributo 2 você escolheu: %s\n", atributo2);
            printf("%s: %.2f - %s: %.2f\n", nomePais1, area1, nomePais2, area2);
            resultadoCarta1 += area1;
            resultadoCarta2 += area2;
            break;
        case 3:
            printf("Atributo 2 você escolheu: %s\n", atributo3);
            printf("%s: %ld - %s: %ld\n", nomePais1, pib1, nomePais2, pib2);
            resultadoCarta1 += pib1;
            resultadoCarta2 += pib2;
            break;
        case 4:
            printf("Atributo 2 você escolheu: %s\n", atributo4);
            printf("%s: %d - %s: %d\n", nomePais1, numero_pontos_turisticos1, nomePais2, numero_pontos_turisticos2);
            resultadoCarta1 += numero_pontos_turisticos1;
            resultadoCarta2 += numero_pontos_turisticos2;
            break;
        case 5:
            printf("Atributo 2 você escolheu: %s\n", atributo5);
            printf("%s: %.2f - %s: %.2f\n", nomePais1, densidade_populacional1, nomePais2, densidade_populacional2);
            resultadoCarta1 += 1.0 / densidade_populacional1;
            resultadoCarta2 += 1.0 / densidade_populacional2;
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }

    // Exibindo valor das somas dos atributos para cada carta
    printf("--- Resultado da Rodada ---\n");
    printf("Soma dos atributos do(a) %s foi: %.2lf\n", nomePais1, resultadoCarta1);
    printf("Soma dos atributos do(a) %s foi: %.2lf\n", nomePais2, resultadoCarta2);

    //Carta vencedora
    if (resultadoCarta1 > resultadoCarta2)
    {
        printf("%s vence a rodada!\n", nomePais1);
    }
    else if (resultadoCarta2 > resultadoCarta1)
    {
        printf("%s vence a rodada!\n", nomePais2);
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}