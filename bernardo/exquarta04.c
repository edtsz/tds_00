#include <stdio.h>

int main(){

    int numeroX, numeroY, numeroZ;
    
    printf("Número X = ");
    scanf("%i", &numeroX);
    
    printf("Número Y = ");
    scanf("%i", &numeroY);
    
    printf("Número Z = ");
    scanf("%i", &numeroZ);
    
    if (numeroX > numeroY && numeroX > numeroZ){
        printf("Número %i é o maior", numeroX);
    } else if (numeroY > numeroX && numeroY > numeroZ){
        printf("Número %i é o maior", numeroY);
    } else if (numeroZ > numeroX && numeroZ > numeroY){
        printf("Número %i é o maior", numeroZ);
    }
    
    return 0;
}   
