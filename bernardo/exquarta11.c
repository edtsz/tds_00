
#include <stdio.h>

int main() {
    
    int codaluno;
    float notaa, notab, notac, media;

    printf("Digite o código do aluno: ");
    scanf("%d", &codaluno);
    printf("Nota A: ");
    scanf("%f", &notaa);
    printf("Nota B: ");
    scanf("%f", &notab);
    printf("Nota C: ");
    scanf("%f", &notac);
    
    if(notaa>notab && notaa>notac){
        media = (4 * notaa + 3 * notab + 3 * notac)/10;
    } else if(notab>notaa && notab>notac){
        media = (4 * notab + 3 * notaa + 3 * notac)/10;
    } else if(notac>notaa && notac>notab){
        media = (4 * notac + 3 * notaa + 3 * notab)/10;
    }
    printf("------------------------------------ \n");
    printf("Código do aluno: %d\n", codaluno);
    printf("Notas do aluno %.2f %.2f %.2f\n", notaa, notab, notac);
    printf("Média do aluno: %.2f\n", media);
    
    if(media>=5){
        printf("Você foi APROVADO.");
    } else if(media<=5){
        printf("Você foi REPROVADO.");
    }
    
    
    
    
    return 0;
}
