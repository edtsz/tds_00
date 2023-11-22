#include <stdio.h>

int main() {
    float numero1, numero2, soma, subtracao, multiplicacao, divisao;
    printf("\nDigite o 1° número: ");
    scanf("%f",&numero1);
    printf("\nDigite o 2° número: ");
    scanf("%f",&numero2);
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;
    
    printf("\nA soma é: %f\n",soma);
    printf("\nA subtração é: %f\n",subtracao);
    printf("\nA multiplicação é: %f\n",multiplicacao);
    printf("\nA divisão é: %f\n",divisao);

    return 0;
}