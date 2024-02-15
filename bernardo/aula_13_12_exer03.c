#include <stdio.h>

int main(){
    int i, nhomens=0;
    float alt,maioralt=0, menoralt=999, altmulher=0;
    char sexo;
    
    for(i = 1; i <=10; i++){
        printf("Informe a altura da pessoa %i em metros: ",i);
        scanf("%f", &alt);
        
        printf("INforme o sexo da pessoa %i (M/F): ",i);
        scanf("%s", &sexo);
        
        if(alt>maioralt){
            maioralt = alt;
        }if(alt<menoralt){
            menoralt=alt;
        }if(sexo == 'F' || sexo == 'f'){
            altmulher+=alt;
        }if(sexo == 'M' || sexo == 'm'){
            nhomens++;
        } 
    }
    float media_alt_mulher = altmulher/10;
    printf("\nMaior altura do grupo: %.2f metros.\n", maioralt);
    printf("Menor altura do grupo %.2f metros.\n", menoralt);
    printf("Média de altura das mulheres %.2f metros.\n",media_alt_mulher);
    printf("Número de homens: %i\n", nhomens);
    
    
    
    return 0;
}