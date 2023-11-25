#include <stdio.h>

int main() {
    float segundos, horas, minutos;
    printf("Digite o tempo de duração do evento em segundos: ");
    scanf("%f", &segundos);
    horas = segundos / 3600;
    minutos = segundos / 60;
    printf("A duração do evento em horas é: %f\n", horas);
    printf("A duração do evento em minutos é: %f", minutos);
    
    return 0;
}
