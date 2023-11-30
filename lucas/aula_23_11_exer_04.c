#include <stdio.h>

int main() {
    int num1, num2, num3, maior;
    printf("Digite tres numeros: ");
    scanf("%i",&num1);
    scanf("%i",&num2);
    scanf("%i",&num3);
    if(num1 > num2 && num1 > num3){
        maior = num1;
    } else if(num2 > num1 && num2 > num3){
        maior = num2;
    } else {
        maior = num3;
    }
    printf("O maior numero é: %i", maior);
    return 0;
}
