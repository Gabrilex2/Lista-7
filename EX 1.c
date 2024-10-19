#include <stdio.h>

int main(){
    int a=1,*pi=&a;
    float b=1.5,*pf=&b;
    char c='c',*pc=&c;
    printf("Inteiro: %d\nFloat: %.2f\nChar: %c\n",a,b,c);
    *pi=2;
    *pf=3.7;
    *pc='d';
    printf("\nNovos valores:\n\nInteiro: %d\nFloat: %.2f\nChar: %c\n",a,b,c);
    return 0;
}
