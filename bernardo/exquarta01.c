#include <stdio.h>

int main() {
   
   int numero;
   int sucessor, antecessor;
   
   printf("Digite um número: ");
   scanf("%i ", &numero);
   
   sucessor = numero + 1;
   antecessor = numero - 1;
   
   printf("Numero sucessor: %i \n ", sucessor);
   printf("Numero antecessor: %i \n ", antecessor);
   
   
    return 0;
}
