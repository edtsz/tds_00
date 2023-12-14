#include <stdio.h>

int main() {

    float trium, tridois, tritres, media;

    printf("Nota do primerio trimestre: ");
    scanf("%f", &trium);
    printf("Nota do segundo trimestre: ");
    scanf("%f", &tridois);
    printf("Nota do terceiro trimestre: ");
    scanf("%f", &tritres);
    
    media = (trium+tridois+tritres)/3;
    
    printf("Sua média final é: %.1f\n", media);
    if(media>=7){
        printf("Você foi APROVADO.");
    } else if(media<=7){
        printf("Você foi REPROVADO.");
    }
    
    return 0;
}
