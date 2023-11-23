#include <stdio.h>

int main(){

    float pproduto;
    float percentddesc = 0.05;
    float ppromocional;
  
    printf("Preço do produto: ");
    scanf("%f", &pproduto);
    
    
    ppromocional = pproduto - pproduto * percentddesc;
   
    printf("Preço promocional: %.2f", ppromocional);
  
    return 0;
}
