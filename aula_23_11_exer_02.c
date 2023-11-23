#include <stdio.h>

int main() {
    float reais, dolares;
    printf("Reais: ");
    scanf("%f",&reais);
    dolares = reais / 4.90;
    printf("\nDólares: %f",dolares);

    return 0;
}
