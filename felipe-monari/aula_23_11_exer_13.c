#include <stdio.h>

int main() {
    float largura, comprimento, area;
    printf("Digite a largura: ");
    scanf("%f",&largura);
    printf("Digite o comprimento: ");
    scanf("%f",&comprimento);
    area = largura * comprimento;
    if(area < 100){
        printf("TERRENO POPULAR");
    }else if(area >= 100 && area <= 500){
        printf("TERRENO MASTER");
    }else if(area > 500){
        printf("TERRENO VIP");
    }
    return 0;
}
