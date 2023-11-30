#include <stdio.h>

int main() {
float media1,media2,media3,media;
printf("Digite suas medias: ");
scanf("%f",&media1);
printf("Digite suas medias: ");
scanf("%f",&media2);
printf("Digite suas medias: ");
scanf("%f",&media3);

media = (media1 + media2 + media3)/3;

if (media >=7.0){
    printf("Sua media é de %f, APROVADO !",media);
}
else{
     printf("Sua media é de %f, REPROVADO !",media);
}
return 0;
}
