#include <stdio.h>

int main() {
    int numero;
    printf ("Digite um número: ");
    scanf ("%i",&numero);
    printf ("O número antecessor a esse é: %i \n",(numero-1));
    printf ("O número sucessor a esse é: %i",(numero+1));
    
    
    return 0;
}
