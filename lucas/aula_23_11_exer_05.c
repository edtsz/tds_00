#include <stdio.h>

int main() {
    int preco, promo;
    printf("Digite o preco do produto: ");
    scanf("%i",&preco);
    promo = preco - (preco * 0.05);
    printf("O valor com desconto é de: %i", promo);
    return 0;
}
