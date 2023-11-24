#include <stdio.h>

int main() {
    double largura, comprimento, metrosQuadrados;
    
    printf("Informe a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Informe o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    
    metrosQuadrados = largura *comprimento;
    
    printf("O terreno tem %.2fm²\n", metrosQuadrados);
    
    if(metrosQuadrados <= 100){
        printf("Terreno popular");
    }
    else if(metrosQuadrados >100 & metrosQuadrados <=500){
        printf("Terreno master");
    }
    else if(metrosQuadrados >500){
        printf("Terreno VIP");
    }
    
    return 0;
}
