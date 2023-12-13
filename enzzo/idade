#include <stdio.h>

int main() {
    int idade, soma_idades = 0, contador = 0;
    do {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if (idade > 0) {
            soma_idades += idade;
            contador++;
        } else if (idade < 0) {
            printf("Por favor, insira uma idade válida.\n");
        }

    } while (idade != 0);
    if (contador > 0) {
        double media = (double)soma_idades / contador;
        printf("A idade média  de indivíduos é de: %.2f\n", media);
    } else {
        printf("Nenhuma idade válida inserida.\n");
    }

    return 0;
}
