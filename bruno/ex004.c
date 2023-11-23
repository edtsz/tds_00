#include <stdio.h>

int main() {
 float horas, minutos, segundos;
 printf("Digite o tempo de duração do evento em segundos: ");
 scanf("%f",&segundos);
 horas = segundos/3600;
 minutos = segundos/60;
 printf("O evento em segundos é: %f \n em minutos: %f \nem horas: %f \n",segundos,minutos,horas);

    return 0;
}
