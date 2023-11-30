#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%i",&num1);
    scanf("%i",&num2);
    if(num1 > num2){
        printf("O primeiro valor é o maior ");
    } else if (num1 < num2){
        printf("O segundo valor é o maior ");
    } else {
        printf("Não existe valor maior, os dois são iguais");
    }
    return 0;
}
