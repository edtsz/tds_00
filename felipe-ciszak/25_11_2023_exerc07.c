#include <stdio.h>

int main() {
   float custofabric, distribuidor, imposto, custocliente;
   printf("Digite o custo de fabricação: ");
   scanf("%f", &custofabric);
   distribuidor = custofabric * 1.28;
   imposto = custofabric * 1.45;
   custocliente = imposto + distribuidor;
   printf("O valor final ao consumidor é: %f", custocliente);
  
    return 0;
}
