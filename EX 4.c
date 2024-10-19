#include <stdio.h>

int main(){
    float vet[10],*p=vet;
    int i;
    for(i=0;i<10;i++){
        printf("Posicao %d: %d\n",i+1,&*(p+i));
    }
    return 0;
}
