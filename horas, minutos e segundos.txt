#include <stdio.h>

int main() {
    
    float hora, minutos, segundos;
     printf("digite o valor em horas: ");
     
    scanf("%f", &hora);
    hora = 1;
    minutos = 60 / hora;
    segundos = 60 * minutos;
    
    printf("O valor em horas é: %f \n", hora);
    printf("O valor em minutos é: %f \n", minutos);
    printf("O valor em segundos é: %f \n", segundos);
    
    return 0;
}
