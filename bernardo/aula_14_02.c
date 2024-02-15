#include <stdio.h>

int main() {

    int vetor[5];
    int count = 5;
    int troca= 0;
    int len = sizeof(vetor)/sizeof(int);
    
    for(int i = 0; i < count; i++){
        printf("De 5 valores: ");
        scanf("%i", &vetor[i]);
    }
    
    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){
            if(vetor[i] > vetor[j]){
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }
    
    for(int i = 0; i < count; i++){
        printf(" %i", vetor[i]);
        
    }
    return 0;
}