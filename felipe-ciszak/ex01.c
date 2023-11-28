#include <stdio.h>

int main() {
    float numero1, numero2, soma, subtracao, multiplicacao, divisao;
    printf("\n Digite o primeiro número: ");
    scanf("%f",&numero1);
    printf("\n Digite o segundo número");
    scanf("%f",&numero2);
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("\n A soma é %f\n", soma);
    printf("\n A subtração é %f\n", subtracao);
    printf("\n A multiplicação é %f\n", multiplicacao);
    printf("\n A divisão é %f\n", divisao);

    return 0;

}
