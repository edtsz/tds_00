#include <stdio.h>

int main() {
    double kmPercorridos, total, precoKm, precoDias;
    int diasPercorridos;
    
    printf("Informe quantos Km foram percorridos: ");
    scanf("%lf", &kmPercorridos);
    printf("Informe por quantos dias o veículo esteve alugado: ");
    scanf("%i", &diasPercorridos);
    
    precoKm = kmPercorridos *0.20;
    precoDias = diasPercorridos *90;
    total = precoKm +precoDias;
    
    printf("Total: R$%.2f", total);
    
    return 0;
}
