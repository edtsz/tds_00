/* Que leia um número inteiro e mostre o seu antecessor e seu sucessor. */ 

#include <stdio.h>

int main () {
    int numero, numAnte, numSuce;

    printf("Digite um número ");
    scanf("%i", numero);

    numAnte = numero - 1;
    numSuce = numero + 1;

    prinf("O numero antecessor é: %i", numAnte);
    printf("O numero sucessor é: %i", numSuce);
}
