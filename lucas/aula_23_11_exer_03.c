#include <stdio.h>

int main() {
    int segundos;
    float horas, minutos;
    printf("Digite o tempo: ");
    scanf("%i",&segundos);
    horas = segundos/3600;
    minutos = segundos/60;
    printf("Duraçao em horas: %f",horas);
    printf("Duraçao em horas: %f",minutos);

    return 0;
}
