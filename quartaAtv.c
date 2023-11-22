#include <stdio.h>

int main() {
   int numero1, numero2, numero3, maior ;
   printf ("Digite o 1° número: ");
    scanf ("%i",&numero1);
   printf ("Digite 2° número: ");
    scanf ("%i",&numero2);
   printf ("Digite 3° número: ");
    scanf ("%i",&numero3);
    maior=numero1;
    if (maior<numero2 ){
        maior=numero2;
    }
    if (maior<numero3){
        maior=numero3;
    }
    printf ("O numero maior é: %i",maior);
    
    return 0;
}
