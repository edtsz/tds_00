#include <stdio.h>

int main(){
    
    int idade, contador=0, soma_idades=0;
    do{
        printf("Digite a idade: ");
        scanf("%i", &idade);
        if(idade>0){
            soma_idades += idade;
            contador++;
        }
    }while(idade !=0);
    
    if(contador>0){
        float media= (float)soma_idades / contador;
        printf("A média das idades é %.2f\n", media);
    }else {
           printf("Idade inválida, por favor insira uma idade válida!"); 
        }
    
    return 0;
}