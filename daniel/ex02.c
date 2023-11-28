/* Que leia o preço de um produto, calcule e mostre o seu PREÇO PROMOCIONAL, com 5% de desconto.*/

    #include <stdio.h>

    int main () {
    float preco, promo;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
 
    promo = preco - preco*0.05;
    
    printf("O preço do produto na promoção é: %f\n ", promo);
    
    return 0;
    }
