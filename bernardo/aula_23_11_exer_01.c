#include <stdio.h> 

int main () { 
	float dolar = 4.90; 
	float rcarteira, dolcomp; 
	
	printf("Valor do dolar: %.2f\n", dolar); 
	printf("Reais na carteira:"); 
	scanf("%f", &rcarteira); 
	
	dolcomp = rcarteira / dolar;
	
	printf("Dolares comprados: %.2f\n", dolcomp);
	
	}
	
