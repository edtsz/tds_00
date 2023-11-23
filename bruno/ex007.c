#include <stdio.h>

int main() {
float kilometros, precoTotal, dias;
printf("Digite a quantidade de KM rodados: ");
scanf("%f",&kilometros);
printf("Digite os dias percorridos: ");
scanf("%f",&dias);
precoTotal = (kilometros*0.20)+(dias*90);
printf("Você precisa pagar R$: %f",precoTotal);
    return 0;
}
