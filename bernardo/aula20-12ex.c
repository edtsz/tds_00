#include <stdio.h>

int main() {
    
    char nFunc[50];
    int filhos, tFunc=0;
    float hTrabalhadas, sBruto, sLiquido, total=0, imposto;

    printf("Nome: ");
    scanf("%s", &nFunc);
    
    while(strcmp(nFunc, "fim")!=0){    
        printf("Quantidade de filhos: ");
        scanf("%i", &filhos);
        printf("Horas trabalhadas: ");
        scanf("%f", &hTrabalhadas);
        
        sBruto = (hTrabalhadas*12.50) + (filhos*125.55);
        printf("Sálario bruto: %.2f\n", sBruto);
        
        imposto = sBruto*0.12;
        sLiquido = sBruto - imposto;
        printf("Sálario líquido: %f\n", sLiquido);
        printf("Imposto: %f\n", imposto);
     
        tFunc++;
        total += sBruto;
        
     printf("\n-----------------\n");    
     
        printf("\nNome: ");
        scanf("%s", &nFunc);
        }
    
    printf("Total de funcionários: %i\n", tFunc);
    printf("Total gasto com salários: %.2f\n", total);
    return 0;
}
