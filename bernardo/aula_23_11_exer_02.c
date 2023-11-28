#include <stdio.h>

int main() {
   char nQuarto[50];
   int dHospedados;
   float vTaxa, vTTotal, vDosDiasHosp, vTDosDiasHosp;
   float vDiaria = 60.00;
    
    printf("Número do quarto: ");
    scanf("%s", &nQuarto);
    
    printf("Dias Hospedados: ");
    scanf("%i", &dHospedados);
    
    
    
    
    if (dHospedados <5) {
        vTaxa = 9.25;
    }
    else if (dHospedados ==5) {
        vTaxa = 8.50;
    }
    else if ( dHospedados >5) {
        vTaxa = 8.00;
    }
    
    
    
    
    
    vDosDiasHosp = dHospedados * vDiaria;
    vTTotal = vTaxa * dHospedados;
    vTDosDiasHosp = vTTotal + vDosDiasHosp;
    
    printf("Número do quarto: %s \n", nQuarto);
    printf("Valor dos dias hospedados: %.2f \n", vDosDiasHosp);
    printf("Valor total da taxa: %.2f \n", vTTotal);
    printf("Valor total dos dias hospedados: %.2f \n", vTDosDiasHosp);
    
    return 0;
}
