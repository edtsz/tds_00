#include <stdio.h>

int main() {
   int primeirovalor, segundovalor;
   printf("Digite o primeiro valor inteiro: ");
   scanf("%i", &primeirovalor);
   printf("Digite o segundo valor inteiro: ");
   scanf("%i", &segundovalor);
   if(primeirovalor > segundovalor){
       printf("O primeiro valor é o maior: %i", primeirovalor);
   } else if(segundovalor > primeirovalor){
       printf("O segundo valor é o maior: %i", segundovalor);
   } else{
       printf("Não existe valor maior os dois são iguais.");
   }
   
    return 0;
}	
