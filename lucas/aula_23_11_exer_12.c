#include <stdio.h>

int main() {
    char sexo[30];
    float pesoIdeal, altura;
    printf("Seu sexo: ");
    scanf("%s",&sexo);
    printf("Sua altura: ");
    scanf("%f",&altura);
    
    if (strcmp(sexo,"m") == 0){
        pesoIdeal = (72.7*altura)-58;
    } else if(strcmp(sexo,"f") == 0){
        pesoIdeal = (62.1*altura)-44.7;
    }
    
    printf("Seu peso ideal é: %f",pesoIdeal);
    return 0;
}
