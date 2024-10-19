#include <stdio.h>

void troca(int *a, int *b){
    int aux=*a;
    *a=*b;
    *b=aux;
}

int main(){
    int a,b;
    printf("Valor de A e B: ");
    scanf("%d%d",&a,&b);

    troca(&a,&b);

    printf("\nDepois da troca:\nA=%d\nB=%d\n",a,b);
    return 0;
}
