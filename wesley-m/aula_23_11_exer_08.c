#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Informe o 1° valor: ");
    scanf("%i", &n1);
    printf("Informe o 2° valor: ");
    scanf("%i", &n2);
    
    if (n1 > n2){
        printf("O primeiro valor é o maior");
    }
    else if (n1 < n2){
        printf("O segundo valor é o maior");
    }
    else{
        printf("Não existe valor maior, os dois são iguais");
    }

    return 0;
}
