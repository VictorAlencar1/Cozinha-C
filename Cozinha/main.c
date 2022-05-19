/********************************************************************************
Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento,
largura e altura), calcular e escrever a quantidade de caixas de azulejos para
se colocar em todas as suas paredes (considere que não será descontada a área
ocupada por portas e janelas). Cada caixa de azulejos possui 1.5m².
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define CAIXA 1.5

int main()
{
    //INICIO
    float comp, larg, alt;

    printf("Qual o comprimento da Cozinha:\n");
    scanf("%f", &comp);
    printf("Qual a largura da Cozinha:\n");
    scanf("%f", &larg);
    printf("Qual a Altura da Cozinha:\n");
    scanf("%f", &alt);

    //PROCESSAMENTO
    float area_m2 = larg*comp*alt;
    float total = area_m2/CAIXA;

    //SAIDA

    printf("Quantidade necessaria de caixas com azulejo sao de: %.2f\n", total);

    return 0;
}
