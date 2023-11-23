#include <stdio.h>

int main() {
    float custof, custoc, dist, impost;
    printf("Preco fabricacao: ");
    scanf("%f",&custof);
    dist = custof * 1.28;
    impost = custof * 1.45;
    custoc = dist + impost;
    printf("Preco carro novo: %f", custoc);
    return 0;
}
