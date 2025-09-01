#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int escolhaJogador;
    char atributo1[30] = "População";
    char atributo2[30] = "Àrea";
    char atributo3[30] = "PIB";
    char atributo4[30] = "Número de Pontos Turíticos";
    char atributo5[30] = "Densidade Demográfica";
    // Opções Menu
    printf("### Super Trunfo Países ###\n");
    printf("1. %s\n", atributo1);
    printf("2. %s\n", atributo2);
    printf("3. %s\n", atributo3);
    printf("4. %s\n", atributo4);
    printf("5. %s\n", atributo5);
    printf("Escolha um atributo:\n");
    scanf("%d", &escolhaJogador);
    // Carta 1
    char nomePais1[30] = "Brasil";
    long int populacao1 = 213421037;
    float area1 = 55767.049;
    long int pib1 = 2794100000;
    int numero_pontos_turisticos1 = 20;
    float desidade_populacional1 = 25.07;
    // Carta 2
    char nomePais2[30] = "Argentina";
    long int populacao2 = 47070000;
    float area2 = 2780400.0;
    long int pib2 = 6370000000;
    int numero_pontos_turisticos2 = 20;
    float desidade_populacional2 = 16.92;

    // Paises
    printf("%s vs %s\n", nomePais1, nomePais2);

    // Coletando a escolha do jogador
    switch (escolhaJogador)
    {
    case 1:
        printf("Você escolheu: %s\n", atributo1);
        printf("%s: %ld - %s: %ld\n", nomePais1, populacao1, nomePais2, populacao2);
        break;
    case 2:
        printf("Você escolheu: %s\n", atributo2);
        printf("%s: %.2f - %s: %.2f\n", nomePais1, area1, nomePais2, area2);
        break;
    case 3:
        printf("Você escolheu: %s\n", atributo3);
        printf("%s: %ld - %s: %ld\n", nomePais1, pib1, nomePais2, pib2);
        break;
    case 4:
        printf("Você escolheu: %s\n", atributo4);
        printf("%s: %d - %s: %d\n", nomePais1, numero_pontos_turisticos1, nomePais2, numero_pontos_turisticos2);
        break;
    case 5:
        printf("Você escolheu: %s\n", atributo5);
        printf("%s: %.2f - %s: %.2f\n", nomePais1, desidade_populacional1, nomePais2, desidade_populacional2);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    // Realizando lógica de comparaçaõ de resultado
    if ((escolhaJogador > 5) || (escolhaJogador < 1))
    {
        printf("Escolha apenas as opções de 1 a 5!!!\n");
    }
    else if (((escolhaJogador == 1) && (populacao1 > populacao2)) ||
             ((escolhaJogador == 2) && (area1 > area2)) ||
             ((escolhaJogador == 3) && (pib1 > pib2)) ||
             ((escolhaJogador == 4) && (numero_pontos_turisticos1 > numero_pontos_turisticos2)) ||
             ((escolhaJogador == 5) && (desidade_populacional1 < desidade_populacional2)))
    {

        printf("%s Venceu!", nomePais1);
    }
    else if (((escolhaJogador == 1) && (populacao1 == populacao2)) ||
             ((escolhaJogador == 2) && (area1 == area2)) ||
             ((escolhaJogador == 3) && (pib1 == pib2)) ||
             ((escolhaJogador == 4) && (numero_pontos_turisticos1 == numero_pontos_turisticos2)) ||
             ((escolhaJogador == 5) && (desidade_populacional1 == desidade_populacional2)))
    {
        printf("Empate!!!");
    }
    else
    {
        printf("%s Venceu!", nomePais2);
    }
    return 0;
}