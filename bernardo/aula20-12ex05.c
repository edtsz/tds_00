// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float altura, peso, somaAlt, mediaAlt;
    int totalP = 0, tPesMaisQ90 = 0, menor50 = 0, maior100 = 0;
    for(int i=0; i<3; i++){
        printf("Altura: ");
        scanf("%f", &altura);
        printf("Peso: ");
        scanf("%f", &peso);
    
        totalP++;
        somaAlt += altura;
        
        if(peso > 90){
            tPesMaisQ90++;
        }
        if(peso < 50 && altura <1.60){
            menor50++;
        }
        if(peso > 100 && altura > 1.90){
            maior100++;
        }
        
    }
    mediaAlt = somaAlt/totalP;
   printf("\nA média de altura do grupo é: %.2f\n", mediaAlt);
   printf("Número de pessoas que pesam mais que 90 Kg: %i\n", tPesMaisQ90);
   printf("Número de pessoas que pesam menos que 50 Kg e medem 1,60m: %i\n", menor50);
   printf("Número de pessoas que pesam menos que 100 Kg e medem 1,90m: %i\n", maior100);
    
    return 0;
}
