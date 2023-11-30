#include <stdio.h>

int main() {
    float dinheiroReais, dinheiroConvertido;
    printf ("Digite a quantidade de reais que você possui: ");
    scanf("%f", &dinheiroReais);
    dinheiroConvertido = dinheiroReais / 4.90;
    printf("Você pode comprar %f dólares", dinheiroConvertido);
    
    return 0;
}
