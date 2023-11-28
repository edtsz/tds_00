#include <stdio.h>

void main (){
    int valorA, valorB, subtracao, soma, divisao, multiplicacao;
    printf ("Digite um valor: ");
    scanf ("%i", &valorA);
    printf ("Digite outro valor: ");
    scanf ("%i", &valorB);
    soma = valorA + valorB;
    subtracao = valorA - valorB;
    multiplicacao = valorA * valorB;
    divisao = valorA / valorB;
    printf ("A soma é: %i \n",soma);
    printf ("A subtração é: %i \n",subtracao);
    printf ("A multiplicação é: %i \n",multiplicacao);
    printf ("A divisão é: %i \n",divisao);
}
