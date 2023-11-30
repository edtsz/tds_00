#include <stdio.h>

int main(){

    float pfabrica;
    float pconsumidor; 
    float percentdb = 0.28;
    float impostos = 0.45;
    
    printf("Preço de fábrica do carro: ");
    scanf("%f", &pfabrica);
    
    pconsumidor = pfabrica + ((pfabrica * percentdb) + (pfabrica * impostos));
    
    printf("Preço ao consumidor: %.2f", pconsumidor);
    
    return 0;
}   
