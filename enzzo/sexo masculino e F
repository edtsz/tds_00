#include <stdio.h>

int main() {
    // Declarando variáveis
    int i, numHomens = 0;
    float altura, maiorAltura = 0, menorAltura = 999, somaAlturaMulheres = 0;
    char sexo;
    for (i = 1; i <= 10; i++) {
        printf("Informe a altura da pessoa %d em metros: ", i);
        scanf("%f", &altura);

        printf("Informe o sexo da pessoa %d (M/F): ", i);
        scanf(" %c", &sexo);
        
        if (altura > maiorAltura) {
            maiorAltura = altura;
        }if (altura < menorAltura) {
            menorAltura = altura;
        }if (sexo == 'F' || sexo == 'f') {
            somaAlturaMulheres += altura;
        }if (sexo == 'M' || sexo == 'm') {
            numHomens++;
        }
    }
    float mediaAlturaMulheres = somaAlturaMulheres / 10;
    printf("\nMaior altura do grupo: %.2f metros\n", maiorAltura);
    printf("Menor altura do grupo: %.2f metros\n", menorAltura);
    printf("Média de altura das mulheres: %.2f metros\n", mediaAlturaMulheres);
    printf("Número de homens: %d\n", numHomens);

    return 0;
}

