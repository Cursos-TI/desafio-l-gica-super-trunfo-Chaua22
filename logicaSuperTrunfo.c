#include <stdio.h>

int main() {

    struct Carta {
        char estado[3];
        char codigo[5];
        char nome[30];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulacional;
        float pibPerCapita;
    };

    struct Carta carta1, carta2;

    printf("Digite os dados da primeira carta:\n");
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Codigo: ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Codigo: ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;


    int atributo = 1;

    printf("\n--- Comparacao de Cartas ---\n");

    if (atributo == 1) {
        printf("Atributo: Populacao\n");
        if (carta1.populacao > carta2.populacao)
            printf("Vencedora: %s\n", carta1.nome);
        else
            printf("Vencedora: %s\n", carta2.nome);
    }
    else if (atributo == 2) {
        printf("Atributo: Area\n");
        if (carta1.area > carta2.area)
            printf("Vencedora: %s\n", carta1.nome);
        else
            printf("Vencedora: %s\n", carta2.nome);
    }
    else if (atributo == 3) {
        printf("Atributo: PIB\n");
        if (carta1.pib > carta2.pib)
            printf("Vencedora: %s\n", carta1.nome);
        else
            printf("Vencedora: %s\n", carta2.nome);
    }
    else if (atributo == 4) {
        printf("Atributo: Densidade Populacional\n");
        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("Vencedora: %s\n", carta1.nome);
        else
            printf("Vencedora: %s\n", carta2.nome);
    }
    else if (atributo == 5) {
        printf("Atributo: PIB per Capita\n");
        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("Vencedora: %s\n", carta1.nome);
        else
            printf("Vencedora: %s\n", carta2.nome);
    }

    return 0;
}

