#include <stdio.h>

void oi() {
    char texto[] = "sou uma function \n";
    printf("%s", texto);
}
int soma(int a,int b){
    int resultado;
    resultado=a+b;
    return resultado;
}
int diminuir(int x,int y){
    int subtracao;
    subtracao=x-y;
    return subtracao;
}
int multiplicar(int c,int d){
    int mult;
    mult=c*d;
    return mult;
}
int dividir(int z, int f){
    int divi;
    divi=z/f;
    return divi;
}
int main(){
    oi();
    
    int total = soma(5,7);
    printf("%i \n", total);
    
    int v1,v2;
    printf("Digite valor: ");
    scanf("%i", &v1);
    printf("Digite valor: ");
    scanf("%i", &v2);
    total = soma(v1,v2);
    printf("%i\n",total);
    
    int tot = diminuir(3,9);
    printf("%i\n", tot);
    
    int to = multiplicar(89,5);
    printf("%i\n", to);
    
    int tota = dividir(50,5);
    printf("%i\n", tota);
    return 0;
}