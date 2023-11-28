#include <stdio.h>

int main() {
    char codigo[30];
    float nota1, nota2, nota3, media, maiorn, n2, n3;
    printf("Codigo do aluno: ");
    scanf("%s",&codigo);
    printf("Digite as tres notas: ");
    scanf("%f",&nota1);
    scanf("%f",&nota2);
    scanf("%f",&nota3);
    if(nota1 > nota2 && nota1 > nota3){
        maiorn = nota1;
        n2 = nota2;
        n3 = nota3;
    } else if(nota2 > nota1 && nota2 > nota3){
        n2 = nota1;
        maiorn = nota2;
        n3 = nota3;
    } else if(nota3 > nota1 && nota3 > nota2){
        n2 = nota1;
        n3 = nota2;
        maiorn = nota3;
    }
    media = ((maiorn * 4) + (n2 * 3) + (n3 * 3))/(4+3+3);
    printf("Sua media é: %f\n", media);
    if(media >= 5){
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }

    return 0;
}
