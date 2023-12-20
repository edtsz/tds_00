#include <stdio.h>

int main() {
    int voto;
    int can1 = 0;
    int can2 = 0;
    int can3 = 0;
    int can4 = 0;
    int nulo = 0;
    int branco = 0;

    printf("Digite o número do seu candidato: ");
    scanf("%i", &voto);
    
    while(voto !=0){
        switch(voto){
            case 1:
            can1++;
            break;
            
            case 2:
            can2++;
            break;
        
            case 3:
            can3++;
            break;
            
            case 4:
            can4++;
            break;
            
            case 5:
            nulo++;
            break;
                
            case 6:
            branco++;
            break;
        }
        printf("Digite o número do seu candidato: ");
        scanf("%i", &voto);
    }
    printf("\nNúmero de votos para o candidato 1: %i\n", can1);
    printf("Número de votos para o candidato 2: %i\n", can2);
    printf("Número de votos para o candidato 3: %i\n", can3);
    printf("Número de votos para o candidato 4: %i\n", can4);
    printf("Número de votos nulos: %i\n", nulo);
    printf("Número de votos em branco: %i\n", branco);
    
    return 0;
}
