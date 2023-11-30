#include <stdio.h>

int main() {
    int nota1, nota2, nota3, media;
    printf("Digite a primeira nota do aluno: ");
    scanf("%i", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%i", &nota2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%i", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    if(media >= 7 ){
        printf("O aluno obteve a média %i e foi aprovado", media);
    } else{
        printf("O aluno obteve a média %i e foi reprovado", media);
    }
    
    return 0;
}
