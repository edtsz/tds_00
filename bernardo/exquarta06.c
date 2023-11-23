#include <stdio.h>

int main(){

    float quantdKms;
    float quantddias;
    float ppKm, ppdia;
    
    printf("Quantos quilômetros o carro rodou? ");
    scanf("%f", &quantdKms);
    printf("Quantos dias o carro rodou? ");
    scanf("%f", &quantddias);
    
    ppdia = quantddias * 90;
    ppKm = quantdKms * 0.20;
    
    printf("Preço por quilômetros rodados: %.2f \n", ppKm);
    printf("Preço por dias rodados: %.2f \n", ppdia);
    
    return 0;
}   
