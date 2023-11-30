
#include <stdio.h>

int main() {
    float real, dolar, total;
    printf("Valor na carteira: ");
    scanf("%f",&real);
    dolar = 4.90;
    total = real/dolar;
    printf("Pode comprar %f dolar(es))", total);
    return 0;
}
