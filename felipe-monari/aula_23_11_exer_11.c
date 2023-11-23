#include <stdio.h>

int main() {
    int codigoAluno;
    float n1, n2, n3,mediaPonderada;
    printf("Digite o código do aluno(a): ");
    scanf("%i",&codigoAluno);
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite a terceira nota: ");
    scanf("%f",&n3);
    
    if(n1 > n2 && n1 > n3){
    mediaPonderada = ((n1 * 4)+(n2 * 3)+(n3 * 3))/(4 + 3 + 3);
    printf("\nA média ponderada é: %f",mediaPonderada);
    if(mediaPonderada >= 5){
        printf("\nAPROVADO");
    }
    }else if(n2 > n1 && n2 > n3){
    mediaPonderada = ((n2 * 4)+(n1 * 3)+(n3 * 3))/(4 + 3 + 3);
    printf("\nA média ponderada é: %f",mediaPonderada);
    if(mediaPonderada >= 5){
        printf("\nAPROVADO");
    }
    }else if(n3 > n2 && n3 > n1){
    mediaPonderada = ((n3 * 4)+(n2 * 3)+(n1 * 3))/(4 + 3 + 3);
    printf("\nA média ponderada é: %f",mediaPonderada);
    if(mediaPonderada >= 5){
        printf("\nAPROVADO");
    }
    }
    return 0;
}
