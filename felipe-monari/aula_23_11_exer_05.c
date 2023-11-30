#include <stdio.h>

int main() {
    float precoProduto, precoPromocional;
    printf("Preço do produto: ");
    scanf("%f",&precoProduto);
    precoPromocional = precoProduto-(precoProduto * 0.05);
    printf("O preço promocional é: %f",precoPromocional);
    return 0;
}
