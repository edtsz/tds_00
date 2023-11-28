#include <stdio.h>

int main() {
float soma,div,sub,mult,num1,num2;
printf("Digite um valor");
scanf("%f",&num1);
printf("Digite outro valor: ");
scanf("%f",&num2);

soma = num1 + num2;
div = num1/num2;
sub = num1-num2;
mult = num1*num2;

printf("O resultado das quatro operações é: \n%f da soma\n%f da divisao\n%f da subtração\n%f da multiplicação", soma,div,sub,mult);




    return 0;
    
}
