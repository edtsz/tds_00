#include <stdio.h>

int main() {
    float segundos, horas, minutos;
    printf("Segundos: ");
    scanf("%f",&segundos);
    horas = segundos / 3600;
    minutos = segundos / 60;
    printf("\nHoras: %f",horas);
    printf("\nMinutos: %f",minutos);
    printf("\nSegundos: %f",segundos);

    return 0;
}
