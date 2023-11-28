#include <stdio.h>

int main() {
    int idade;
    
    printf("Informe a idade do aluno: ");
    scanf("%i", &idade);
    
    if(idade >= 5 & idade <= 7){
        printf("infantil A (5-7)");
    }
    else if(idade >= 8 & idade <= 10){
        printf("infantil B (8-10)");
    }
    else if(idade >= 11 & idade <= 13){
        printf("juvenil A (11-13)");
    }
    else if(idade >= 14 & idade <= 17){
        printf("juvenil B (14-17)");
    }
    else if(idade >= 10){
        printf("adulto (18+)");
    }
    else{
        printf("O aluno é novo demais para participar da aula.");
    }

    return 0;
}
