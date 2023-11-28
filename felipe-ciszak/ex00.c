#include <stdio.h>
    
    int main() {
        int numero01, numero02, soma = numero01 + numero02;
        printf("\n Digite o 1º número: ");
        scanf("%i", &numero01);
        printf("\n Digite o 2º número: ");
        scanf("%i", &numero02);
        soma = numero01 + numero02;
        printf("\n A soma é: %i", soma);

        return 0;

    }