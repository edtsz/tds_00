#include <stdio.h>

int main() {
    int numero1, numero2, soma;
    printf("\nDigite o 1° número: ");
    scanf("%i",&numero1);
    printf("\nDigite o 2° número: ");
    scanf("%i",&numero2);
    soma = numero1 + numero2;
    printf("\nA soma é: %i\n",soma);
    return 0;
}