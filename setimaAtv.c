#include <stdio.h>

int main() {
   double custoFabrica, custoTotal, distribuidor, imposto;
    printf ("Informe o custo de fabrica do carro: ");
    scanf ("%lf",&custoFabrica);
    distribuidor = custoFabrica*0.28;
    imposto = custoFabrica*0.45;
    custoTotal = imposto+distribuidor+custoFabrica;
    printf ("O total a pagar é de: %.2f",custoTotal);
    return 0;
}
