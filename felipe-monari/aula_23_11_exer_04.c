#include <stdio.h>

int main() {
    float n1, n2, n3;
    printf("1° número: ");
    scanf("%f",&n1);
    printf("2° número: ");
    scanf("%f",&n2);
    printf("3° número: ");
    scanf("%f",&n3);
    if(n1 > n2 && n1 > n3){
        printf("O 1° número é o maior");
    }else if(n2 > n1 && n2 > n3){
        printf("O 2° número é o maior");
    }else if(n3 > n1 && n3 > n1){
        printf("O 3° número é o maior");
    }
    return 0;
}
