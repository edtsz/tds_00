#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;
    const float percentDistribuidor = 0.28, percentImpostos = 0.45;

    printf("Informe o custo de fabrica do carro: R$");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * percentDistribuidor) + (custoFabrica * percentImpostos);

    printf("O custo ao consumidor do carro e: R$%.2f\n", custoConsumidor);

    return 0;
}
