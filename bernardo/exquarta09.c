
#include <stdio.h>

int main() {

    char nadador;
    int idnadador, infatila, infantilb, juvenila, juvenilb, adulto;

    printf("Nome do nadador: ");
    scanf("%s", &nadador);
    printf("Idade do nadador: ");
    scanf("%i", &idnadador);

    if(idnadador<5){
        printf("Não se enquadra em nenhuma das categorias pois não possui idade suficiente.");
    } else if( idnadador>=5,idnadador<=7){
        printf("Está classificado na categoria infantil a.");
    } else if( idnadador>=8,idnadador<=10){
        printf("Está classificado na categoria infantil b.");
    } else if( idnadador>=11,idnadador<=13){
        printf("Está classificado na categoria juvenil a.");
    } else if( idnadador>=14,idnadador<=17){
        printf("Está classificado na categoria juvenil b.");
    } else if( idnadador>=18){
        printf("Está classificado na categoria adulto.");
    }

    return 0;
}
