#include <stdio.h>

int main() {
int idade;
printf("Digite a idade do nadador: ");
scanf("%i",&idade);
if (idade >=5 && idade <=7){
    printf("Categoria infantil A %i",idade);
} 
else 
    if (idade >=8 && idade <=10){
        printf("Categoria infantil B");
    }
else 
    if (idade >=11 && idade <=13){
        printf("Categoria Juvenil A");
    }
else 
    if (idade >=14 && idade <=17){
        printf("Categoria Juvenil B");
    }
else {
        printf("Categoria Adulto");
    }    
return 0;
}
