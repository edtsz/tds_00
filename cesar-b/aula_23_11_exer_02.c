#include <stdio.h>

int main() {
    double reais, dolares= 4.90;
    
    printf("Informe o valor em reais: ");
    scanf("%lf", &reais);
    
    reais =reais /dolares;
    printf("R$%.2f", reais);
    return 0;
}
