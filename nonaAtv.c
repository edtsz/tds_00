#include <stdio.h>

int main() {
   int idade;
   printf ("Informe a idade do nadador: ");
   scanf("%i",&idade);
   
   if (idade >=5 & idade <=7){
       printf ("Infantil A");
   }
   else if (idade >=8 & idade<=10){
       printf ("Infantil B");
   }
  else if (idade >=11 & idade <=13){
      printf ("Juvenil A");
  }
   else if (idade >=14 & idade <=17){
      printf ("Juvenil B");
   }
    else if (idade >=18){
      printf ("Adulto");
    }
    else {
        printf ("Nãoooooo pode");
    }
    return 0;
}
