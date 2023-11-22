#include <stdio.h>

int main() {
    int num1, num2, soma;
    printf("digite um numero:");
    scanf("%i",&num1);
    printf("ditie outro numero:");
    scanf("%i",&num2);

    soma = num1 + num2;

    printf("a soma de %i com %i é: %i ",num1,num2,soma);
    

    return 0;
}