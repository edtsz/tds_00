#include <stdio.h>

int main() {
    double media, nota1, nota2, nota3, soma;
    printf ("Informe a primeira nota: ");
    scanf("%lf",&nota1);
    printf ("Informe a segunda nota: ");
    scanf("%lf",&nota2);
     printf ("Informe a terceira nota: ");
    scanf("%lf",&nota3);
    soma=nota1+nota2+nota3;
    media=soma/3;
    printf ("sua media é de: %.2f \n", media);
    if (media>=6){
        printf ("Aprovado!");
    }
    else {
        printf ("Reprovado!");
    }
    return 0;
}
