#include <stdio.h>

int main () {

float vfabrica, vpconsumidor;
float impostos = 27;
float margemdldconcessionaria = 45;
    
    printf(" Valor de fábrica do automóvel: ");
    scanf("%f", &vfabrica);
    printf("Percentagem dos impostos: %.2f\n", impostos);
    printf("Comissão brita da concessionária: %.2f\n", margemdldconcessionaria);

    vpconsumidor = vfabrica * (impostos/100) * (margemdldconcessionaria/100) + vfabrica;

    printf("Valor do automóvel para o consumidor final: %.2f\n", vpconsumidor);

}
