#include <stdio.h>

int main() {
    float km, dias, precokm, precodia, precoTotKm, precoTotDia, precoTotal;
    printf("Kilometros percorridos: ");
    scanf("%f",&km);
    printf("Dias alugados: ");
    scanf("%f",&dias);
    precokm = 0.20;
    precodia = 90;
    precoTotKm = precokm * km;
    precoTotDia = precodia * dias;
    precoTotal = precoTotKm + precoTotDia;
    printf("O valor total é: %f", precoTotal);
    
    return 0;
}
