#include <stdio.h>

int main() {
    float custoConsumidor,custoFabrica;
    printf("Custo de fábrica: ");
    scanf("%f",&custoFabrica);
    custoConsumidor = ((custoFabrica * 0.28)+custoFabrica)+((custoFabrica * 0.45)+custoFabrica);
    printf("O custo ao consumidor é: %f",custoConsumidor);
    return 0;
}
