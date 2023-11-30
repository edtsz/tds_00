#include <stdio.h>

int main() {
    int numero;
    
    printf("Informe o valor: ");
    scanf("%i", &numero);
    
    printf("Numero antecessor: %i\n", numero -1);
    printf("Numero selecionado: %i\n", numero);
    printf("Numero sucessor: %i\n", numero +1);
    
    return 0;
}
