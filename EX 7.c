#include <stdio.h>

void frac(float num, int* inteiro, float* frac){
    *inteiro=(int)num;
    *frac=num-*inteiro;
}

int main(){
    float num, nfrac;
    int ninteiro;
    printf("Digite um numero real: ");
    scanf("%f",&num);
    frac(num, &ninteiro, &nfrac);

    printf("Numero inteiro: %d\n",ninteiro);
    printf("Numero fracionario: %f\n",nfrac);
    return 0;
}
