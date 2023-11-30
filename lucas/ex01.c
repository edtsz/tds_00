
#include <stdio.h>

int main() {
    float num1, num2, soma, subtracao, multiplicacao, divisao;
    printf("digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("digite o segundo numero: ");
    scanf("%f", &num2);
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    printf("a soma é : %f\n", soma);
    printf("a subtraçao é : %f\n", subtracao);
    printf("a multiplicaçao é : %f\n", multiplicacao);
    printf("a divisao é : %f\n", divisao);

    return 0;
}
