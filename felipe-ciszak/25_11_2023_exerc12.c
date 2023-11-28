#include <stdio.h>

int main() {
    float altura, pesoideal;
    char sexo[1];
    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);
    printf("Digite o sexo da pessoa: ");
    scanf("%s", &sexo);
    if(strcmp(sexo,"m")==0){
        pesoideal = (72.7*altura)-58;
    } else if (strcmp(sexo,"f")==0){
        pesoideal = (62.1*altura)-44.7;
    }
    printf("O peso ideal da pessoa será: %f", pesoideal);
    
    return 0;
}
