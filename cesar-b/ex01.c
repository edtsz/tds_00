#include <stdio.h>

void main() 
{
    int valorA, valorB, soma, subt, divs, mult;
    
    printf("digite o primeiro valor:    ");
    scanf("%i", &valorA);
    printf("digite o segundo valor:     " );
    scanf("%i", &valorB);
    
    soma = valorA + valorB;
    subt = valorA - valorB;
    divs = valorA / valorB;
    mult = valorA * valorB;
    
    printf("%i + %i = %i \n", valorA, valorB, soma);
    printf("%i - %i = %i \n", valorA, valorB, subt);
    printf("%i / %i = %i \n", valorA, valorB, divs);
    printf("%i * %i = %i \n", valorA, valorB, mult);
}
