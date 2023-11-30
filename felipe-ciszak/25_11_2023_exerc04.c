#include <stdio.h>

int main() {
    int numInteiro1, numInteiro2, numInteiro3;
    printf("Digite três números: ");
    scanf("%i", &numInteiro1);
    scanf("%i", &numInteiro2);
    scanf("%i", &numInteiro3);
    if(numInteiro1 > numInteiro2 && numInteiro1 > numInteiro3){
        printf("O número maior entre os três números é: %i", numInteiro1);
    } else if(numInteiro2 > numInteiro3 && numInteiro2 > numInteiro1){
        printf("O número maior entre os três números é: %i", numInteiro2);
    } else{
        printf("O número maior entre os três números é: %i", numInteiro3);
    }
    return 0;
}
