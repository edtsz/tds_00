
#include <stdio.h>

int main() {

    int numerox, numeroy;
    
    printf("De um valor para X: ");
    scanf("%i", &numerox);
    printf("De um valor para y: ");
    scanf("%i", &numeroy);
    
    if(numerox>numeroy){
    printf("O %i é maior que o %i.\n", numerox, numeroy);
}  else if(numeroy>numerox){
    printf("O %i é maior que o %i.\n", numeroy, numerox);
}  else if(numerox=numeroy){
    printf("Os números são iguais.");
}
    return 0;
}
