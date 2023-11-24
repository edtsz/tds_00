#include <stdio.h>

int main() {
    int tempoTotal, horas, minutos, segundos;

    printf("Informe o tempo em segundos: ");
    scanf("%i", &tempoTotal);

    horas = tempoTotal / 3600;
    minutos = (tempoTotal % 3600) / 60;
    segundos = tempoTotal % 60;

    printf("O tempo é equivalente a: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
