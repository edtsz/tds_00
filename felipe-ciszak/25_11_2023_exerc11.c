#include <stdio.h>

int main() {
    float codaluno, nota1, nota2, nota3, notamaior, n2, n3, media;
    printf("Digite o código do aluno: ");
    scanf("%f", &codaluno);
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);
    if(nota1 > nota2 && nota1 > nota3){
        notamaior = nota1;
        nota2 = n2;
        nota3 = n3;
    } else if(nota2 > nota1 && nota2 > nota3){
        notamaior = nota2;
        nota1 = n2;
        nota3 = n3;
    } else if(nota3 > nota1 && nota3 > nota2){
        notamaior = nota3;
        nota2 = n2;
        nota1 = n3;
    }
    media = (notamaior * 4 + n2 * 3 + n3 * 3) / (4 + 3 + 3);
    if(media >= 5 ){
        printf("O aluno obteve a média %f e foi aprovado", media);
    } else{
        printf("O aluno obteve a média %f e foi reprovado", media);
    }
    
    return 0;

}
