int main() {
   char nome[60];
float reais,converter;
printf("Digite seu nome: ");
scanf("%s",&nome);
printf("Ola %s, quantos reais você quer converter para dollar ?: ",nome);
scanf("%f",&reais);
converter = reais/4.90;
printf("Você tem  U$: %f ",converter);
    return 0;
}
