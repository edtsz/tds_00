int main() {
   float desconto, preco, precoDesconto;
   printf ("Digite o preço do produto: ");
   scanf ("%f",&preco);
   desconto=preco*0.05;
   precoDesconto=preco-desconto;
   printf ("O valor do seu produto com desconto é: %f",precoDesconto);
    return 0;
}
