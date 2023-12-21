// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int sexo, divisorM=0, divisorT=0;
    float maiorAltura=0, menorAltura=5, altura, mediaM, mediaT, totalM=0, totalT=0;
    for(int i=0; i<2; i++){
        printf("Sexo 1(masculino), 2(feminino): ");
        scanf("%i", &sexo);
        printf("Altura: ");
        scanf("%f", &altura);
        
        if(maiorAltura < altura){
            maiorAltura = altura;
        }
        if(menorAltura > altura){
            menorAltura = altura;
        }
        if(sexo == 2){
            totalM += altura;
            divisorM++;
        }
        totalT += altura;
        divisorT++;
    }
    
    mediaM = totalM/divisorM;
    mediaT = totalT/divisorT;
    printf("O maior tem %.2f\n", maiorAltura);
    printf("A menor tem %.2f\n", menorAltura);
    printf("A média de altura das mulhers é: %.2f\n", mediaM);
    printf("A média de altura da turma é: %.2f\n", mediaT);
    
    return 0;
}
