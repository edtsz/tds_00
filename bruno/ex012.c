#include <stdio.h>

int main() {
float nota1,nota2,nota3,media_ponderada;
printf("Digite suas notas: ");
scanf("%f",&nota1);
printf("Digite suas notas: ");
scanf("%f",&nota2);
printf("Digite suas notas: ");
scanf("%f",&nota3);
    if (nota1 >= nota2 && nota1 >= nota3) {
        media_ponderada = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10.0;
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        media_ponderada = (nota2 * 4 + nota1 * 3 + nota3 * 3) / 10.0;
    } else {
        media_ponderada = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10.0;
    }
    if (media_ponderada >= 5.0) {
        printf("Situação: APROVADO\n");
    } else {
        printf("Situação: REPROVADO\n");
    }
return 0;
}
