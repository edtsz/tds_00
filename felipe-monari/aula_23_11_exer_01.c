#include <stdio.h>

int main() {
    float n1, n1M, n1m;
    printf("Digite um número: ");
    scanf("%f",&n1);
    n1M = n1 + 1;
    n1m = n1 - 1;
    printf("\nO sucessor é: %f",n1M);
    printf("\nO antecessor é: %f",n1m);

    return 0;
}
