#include <stdio.h>

int main() {
    float segundos, minutos, horas;
    printf ("Digite o tempo de duração de um evento em segundos: ");
    scanf ("%f",&segundos);
    minutos=segundos/60;
    horas=minutos/60;
    printf ("O tempo em horas: %f",horas);
     printf ("O tempo em minutos: %f",minutos);
      printf ("O tempo em segundos: %f",segundos);

    return 0;
}
