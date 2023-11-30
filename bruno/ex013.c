#include <stdio.h>

int main() {
 
    char sexo;
    float altura, peso_ideal;


    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);  

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);


    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido.\n");
        return 1;  
    }

    
    printf("Peso ideal: %.2f kg\n", peso_ideal);

    return 0;
}
