#include <stdio.h>

int main() {
    double altura, pesoIdeal;
    char sexo;
    
    printf("Informe seu sexo (M/F): ");
    scanf("%c", &sexo);
    printf("Informe sua altura: ");
    scanf("%lf", &altura);
    
    if(sexo == 'm', "M"){ // para homens
        pesoIdeal = (72.7 *altura) -58;
    }
    if(sexo == 'f', "F"){ // para mulheres
        pesoIdeal = (62.1 *altura) -44.7;
    }
    
    printf("Seu peso ideal é de %.2fkg", pesoIdeal);
    
    return 0;
}
