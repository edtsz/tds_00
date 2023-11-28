
#include <stdio.h>

int main() {

    float dolar = 4.90;
    float reais, dolcomp;
    
    printf("Preço do dolar: %.2f \n", dolar);
    printf("Dinheiro na carteira: R$"); 
    scanf("%f", &reais);
 
    dolcomp = reais / dolar;
    
    printf("Dolares comprados: %.2f", dolcomp);
    
    return 0;
}
