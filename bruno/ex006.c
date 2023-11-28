#include <stdio.h>

int main() {
float desconto, produto;
printf("Digite o preço do produto: ");
scanf("%f",&produto);
desconto = produto-(produto*0.05);
printf("Com 5 por cento de desonto o produto custa R$ %f",desconto);
    return 0;
}
