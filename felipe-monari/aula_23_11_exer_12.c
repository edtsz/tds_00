#include <stdio.h>

int main() {
    char sexo[30];
    float altura, peso;
    printf("Digite o sexo: ");
    scanf("%s",&sexo);
    printf("Digite a altura: ");
    scanf("%f",&altura);

    if(sexo == "F"){
        peso = (62.1 * altura)-44.7;
        printf("O peso ideal para o sexo feminino é: %f",peso);
    }else if(sexo == "M"){
        peso = (72.7 * altura)-58.0;
        printf("O peso ideal para o sexo masculino é: %f",peso);
    }
    return 0;
}
