
#include <stdio.h>

int main() {

    char sexo[30];
    float altura, peso;
    
    printf("Qual o seu sexo M/F: ");
    scanf("%s", &sexo);
    printf("Qual a sua altura: ");
    scanf("%f", &altura);
    
    if(strcmp(sexo, "m")==0){
        peso = (72.7*altura)-58;
        printf("Seu peso ideal é: %.2f", peso);
    } else if(strcmp(sexo, "f")==0){
        peso = (62.1*altura)-44.7;
        printf("Seu peso ideal é: %.2f",peso);
    }
    

    
    return 0;
}
