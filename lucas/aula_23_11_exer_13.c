#include <stdio.h>

int main() {
    float comp, larg, area;
    printf("Comprimento do terreno: ");
    scanf("%f",&comp);
    printf("Largura do terreno: ");
    scanf("%f",&larg);
    area = comp * larg;
    printf("A area do terreno é: %f\n", area);
    if(area < 100){
        printf("TERRENO POPULAR ");
    } else if(area > 99 && area < 501){
        printf("TERRENO MASTER");
    } else if(area > 500){
        printf("TERRENO VIP");
    }
    return 0;
}
