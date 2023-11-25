#include <stdio.h>

int main() {
    int num, numa, nums;
    printf("Digite um número: ");
    scanf("%i", &num);
    numa = num -1;
    nums = num +1;
    printf("Número sucessor: %i\n", nums);
    printf("Número antecessor: %i", numa);
    
    return 0;
}
