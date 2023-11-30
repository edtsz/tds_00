#include <stdio.h>

int main() {
    float n1, n2;
    printf("1° número: ");
    scanf("%f",&n1);
    printf("2° número: ");
    scanf("%f",&n2);
    if(n1 > n2) {
        printf("O 1° valor é o maior");
    }else if(n2 > n1){
        printf("O 2° valor é o maior");
    }else if(n1 == n2){
        printf("São iguais");
    }
    return 0;
}
