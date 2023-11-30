#include <stdio.h>

int main() {
    int codigoAluno;
    float nota1, nota2, nota3, media;

    printf("Digite o código do aluno: ");
    scanf("%d", &codigoAluno);
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    if (nota1 >= nota2 && nota1 >= nota3) {
        media = (4 * nota1 + 3 * nota2 + 3 * nota3) / 10;
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        media = (4 * nota2 + 3 * nota1 + 3 * nota3) / 10;
    } else {
        media = (4 * nota3 + 3 * nota1 + 3 * nota2) / 10;
    }

    printf("-------------------------\n");
    printf("Código do aluno: %d\n", codigoAluno);
    printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Média: %.2f\n", media);
    if (media >= 5) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
