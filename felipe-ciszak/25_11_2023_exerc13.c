#include <stdio.h>

int main() {
  float largura, comprimento, area;
  printf("Digite a largura do terrno: ");
  scanf("%f", &largura);
  printf("Digite o comprimento: ");
  scanf("%f", &comprimento);
  area = comprimento * largura;
  if(area < 100){
      printf("A area se classifica como terreno popular.");
  } else if (area >= 100 && area <=500){
      printf("A area se classifica como terreno master.");
  } else if (area > 500){
      printf("A area se classifica como terreno vip.");
  }
  
    return 0;
}
