#include <stdio.h>

int main() {
   float kmpercorridos, qntdias, total;
   printf("Digite a quantidade de KMs percorridos: ");
   scanf("%f", &kmpercorridos);
   printf("Digite a quantidade de dias alugado:");
   scanf("%f", &qntdias);
   kmpercorridos = kmpercorridos * 0.20;
   qntdias = qntdias * 90;
   total = qntdias + kmpercorridos;
   printf("O valor total do aluguel do carro é: %f", total);
   
    return 0;
}
