#include <stdio.h>

int main(){

    float aTotal = 0.0;
    char continuar;
    
    do {
    char nComodo[50];
        float larg, compr, aDComodo ;       
        printf("Digite o nome do cômodo que você deseja saber a área: ");
        scanf("%s", nComodo);
        printf("Qual o comprimento deste cômodo em m²: ");
        scanf("%f", &compr);
        printf("Qual a largura deste cômodo em m²: ");
        scanf("%f", &larg);
    
        aDComodo = larg*compr;
        aTotal += aDComodo;
    
        printf("A área do(a) %s é: %.2f m²\n", nComodo, aTotal);
    
        printf("Deseja continuar calculando a área de outro cômodo?(S para sim/N para não): ");
        scanf("%s", &continuar);
    
    }while(continuar == 'S' || continuar == 's');
        
    printf("A área total da residência: %.2f m²\n",aTotal);
    
    return 0;
}