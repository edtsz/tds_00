#include <stdio.h>

int main() {
float custoFabrica,precoConsumidor;

printf("Digite o custo de fabrica do veiculo: ");
scanf("%f",&custoFabrica);

precoConsumidor = custoFabrica*1.28 + custoFabrica*1.45;

printf("O carro custa R$: %f",precoConsumidor);
return 0;
}
