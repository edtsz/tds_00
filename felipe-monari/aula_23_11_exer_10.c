#include <stdio.h>

int main() {
    float n1,n2,n3,media;
    printf("Digite a nota 1: ");
    scanf("%f",&n1);
    printf("Digite a nota 2: ");
    scanf("%f",&n2);
    printf("Digite a nota 3: ");
    scanf("%f",&n3);
    media = (n1 + n2 + n3)/3;
    if(media >= 7){
        printf("\nA média aritmética é: %f",media);
        printf("\nAprovado(a)");
    }else if(media < 7){
        printf("\nA média aritmética é: %f",media);
        printf("\nReprovado(a)");
    }
    return 0;
}
