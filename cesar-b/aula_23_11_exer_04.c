#include <stdio.h>

int main() {
    int n1, n2, n3, maior;
    
    printf("Informe o 1° valor: ");
    scanf("%i", &n1);
    printf("Informe o 2° valor: ");
    scanf("%i", &n2);
    printf("Informe o 3° valor: ");
    scanf("%i", &n3);
    
    maior = n1;
    if(maior < n2){
        maior = n2;
    }
    if(maior <n3){
        maior = n3;
    }
    printf("O maior numero do conjunto é %i", maior);
    
    return 0;
}
