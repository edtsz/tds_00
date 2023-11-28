#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    printf("Digite as tres notas: ");
    scanf("%f",&nota1);
    scanf("%f",&nota2);
    scanf("%f",&nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("Sua media é: %f\n", media);
    if(media >= 7){
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }

    return 0;
}
