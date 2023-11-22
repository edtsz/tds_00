int main() {
   double kmPercorrido, diasAlugados, totalPagar, valorDia, valorKm;
   printf ("Informe os km percorridos com o carro: ");
   scanf ("%lf",&kmPercorrido);
   printf ("Informe os dias que ficou com o carro: ");
   scanf ("%lf",&diasAlugados);
   valorDia=diasAlugados*90;
   valorKm=kmPercorrido*0.20;
   totalPagar=valorDia+valorKm;
   printf ("Valor total a pagar %.2f \n",totalPagar);
    return 0;
}
