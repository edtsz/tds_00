#include <stdio.h>

int main() {
   
    float largura, comprimento, area;
    char classificacao[20];  

    
    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    
    area = largura * comprimento;

 
    if (area < 100) {
        sprintf(classificacao, "TERRENO POPULAR");
    } else if (area >= 100 && area <= 500) {
        sprintf(classificacao, "TERRENO MASTER");
    } else {
        sprintf(classificacao, "TERRENO VIP");
    }

    
    printf("\nÁrea do terreno: %.2f m²\n", area);
    printf("Classificação do terreno: %s\n", classificacao);

    return 0;
}
