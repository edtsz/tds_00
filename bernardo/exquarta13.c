
#include <stdio.h>

int main() {

    float comprimento, largura, aterreno;
    
    printf("Comprimento do terreto: ");
    scanf("%f", &comprimento);
    printf("Largura do terreno: ");
    scanf("%f", &largura);
    
    aterreno = comprimento*largura;
    
    printf("Área do terreno: %.2fm²", aterreno);
    
    if(aterreno<=100){
        printf("TERRENO POPULAR");
    } else if(aterreno>100, aterreno<=500){
        printf("TERRENO MASTER");
    } else if(aterreno>500){
        printf("TERRENO VIP");
    }
    
    
    return 0;
}
