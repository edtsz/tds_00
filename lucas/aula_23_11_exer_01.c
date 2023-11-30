
#include <stdio.h>

int main() {
    int num, numa, nums;
    printf("Digite um numero: ");
    scanf("%i", &num);
    numa = num -1;
    nums = num +1;
    printf("Numero sucessor: %i\n", nums);
    printf("Numero antecessor: %i", numa);

    return 0;
}
