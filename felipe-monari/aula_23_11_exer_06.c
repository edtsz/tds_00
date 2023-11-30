#include <stdio.h>

int main() {
    float valorAluguel;
    int km, dias;
    printf("Km: ");
    scanf("%i",&km);
    printf("Dias: ");
    scanf("%i",&dias);
    valorAluguel = (90 * dias)+(km*0.20);
    printf("O valor do aluguel é: %f",valorAluguel);
    return 0;
}
