#include <stdio.h>

int main() {
    float precoProduto, produtoPromocao;
    printf("Digite o preço do produto:");
    scanf("%f", &precoProduto);
    produtoPromocao = precoProduto - (precoProduto * 0.05);
    printf("O valor do produto em promoção é: %f", produtoPromocao);
    
    return 0;
}
