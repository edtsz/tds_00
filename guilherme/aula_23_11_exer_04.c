#include <stdio.h>

int main() {
    int a, b, c, menor, maior;
    
    printf("digite os valores:");
    scanf("%d%d%d", &a, &b, &c );
    
    if(a<b){
        if(a<c){
            menor = a;
    }
    else 
            menor = c;
        }
    else
    {
        if(b<c)
            menor = b;
        else
            menor = c;
    }
    
    if(a>b){
        if(a>c)
            maior = a;
        else
            menor = c;
    }
    else{
        if(b>c)
            maior = b;
        else
            maior = c;
    }
    
    printf("Menor: %d\tMaior: %d\n", menor, maior);
    
}
