
#include <stdio.h>

int main() {

    int tempdduraemsec;
    float horas, minutos;

    printf("Tempo de duração do evento: ");
    scanf("%i", &tempdduraemsec);
    
    minutos = tempdduraemsec / 60;
    horas = minutos / 60;
    
    printf("Tempo do evento em segundos: %i \n", tempdduraemsec);
    printf("Tempo do evento em minutos: %.2f \n", minutos);
    printf("Tempo do evento em horas: %.2f \n", horas);
    
	return 0;
}
