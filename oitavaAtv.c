#include <stdio.h>

int main() {
   int valor1, valor2;
   printf ("Digite o primeiro valor: ");
   scanf ("%i",&valor1);
   printf ("Digite o segundo valor: ");
   scanf ("%i",&valor2);
   if (valor1>valor2){
       printf ("O primeiro valor é o maior \n");
   }
   else if (valor1<valor2){
       printf ("O segundo valor é o maior \n");
   }
   else if (valor1==valor2){
       printf("Não existe valor maior, os dois são iguais.");
   }
    return 0;
}
