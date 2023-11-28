#include <stdio.h>

int main() {
    double precoInicial, precoPromocional;
    
    printf("Informe o preço inicial: ");
    scanf("%lf", &precoInicial);
    
    precoPromocional = precoInicial - (precoInicial*0.05);
    
    printf("O preco promocional será de R$%.2f", precoPromocional);
    return 0;
}
