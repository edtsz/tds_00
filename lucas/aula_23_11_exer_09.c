#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%i",&idade);
    printf("Sua categoria é: ");
    if(idade >= 5 && idade <= 7){
        printf("infantil A");
    } else if(idade >= 8  && idade <= 10){
        printf("infantil B");
    } else if(idade >= 11 && idade <= 13){
        printf("juvenil A");
    } else if(idade >= 14 && idade <= 17){
        printf("juvenil B");
    } else if(idade >= 18){
        printf("adulto");
    }

    return 0;
}
