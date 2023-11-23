#include <stdio.h>

int main() {
 int num1, num2, num3;
    printf("Digite um numero: ");
    scanf("%i",&num1);
    printf("Digite um numero: ");
    scanf("%i",&num2);
    printf("Digite um numero: ");
    scanf("%i",&num3);
    
    if(num1 > num2 && num1 > num3){
        printf("o numero %i é o maior",num1);
        
    }
    else if (num2 > num1 && num2 > num3){
        printf("o numero %i é o maior ",num2);
        
    }
    else{
        (num3 > num1 && num3 > num2);
        printf("O numero %i é o maior", num3);
        
    }
    return 0;
}
