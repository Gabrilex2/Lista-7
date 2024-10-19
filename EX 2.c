#include <stdio.h>

int main(){
    int a,b;

    printf("A)%d\n",&a);
    printf("B)%d\n",&b);

    if(&a>&b)
        printf("O endereco de A e maior que B");
    else
        printf("O endereco de B e maior de A");
    return 0;
}
