#include <stdio.h>

int main() {
    
    int numero, antes, depois;
    
    scanf("%i", &numero);
     antes = numero - 1;
    depois = numero + 1;
    
    printf("%i\n", numero);
    printf("%i\n", antes);
    printf("%i\n", depois);
    
    return 0;
}
