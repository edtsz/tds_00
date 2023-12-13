#include <stdio.h>

int main() {
    char continuar;
    float areaTotal = 0.0;

    do {
    char nome[50];
        float largura, comprimento, area;
        printf("Digite o nome do cômodo: ");
        scanf("%s",nome);
        printf("Digite a largura do cômodo em metros: ");
        scanf("%f", &largura);
        printf("Digite o comprimento do cômodo em metros: ");
        scanf("%f", &comprimento);

        area = largura * comprimento;

        areaTotal += area;

        printf("A área do cômodo %s é: %.2f metros quadrados\n", nome, area);
        printf("Deseja calcular outro cômodo? (S para Sim, N para Não): ");
        scanf(" %c", &continuar);

     } while (continuar == 'S' || continuar == 's');

    printf("A área total da residência é: %.2f metros quadrados\n", areaTotal);

    return 0;
}
