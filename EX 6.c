#include <stdio.h>

int func(char *str1, char *str2){
    char *p1, *p2;
    char *start;


    for (p1=str1;*p1!='\0';p1++){
        start=p1;
        p2=str2;

        while (*p2!='\0' && *p1!='\0' && *p1==*p2) {
            p1++;
            p2++;
        }

        if (*p2=='\0')
            return 1;
        p1=start;
    }

    return 0;
}

int main() {
    char *str1="Gabrielalves";
    char *str2="Gabriel";

    if (func(str1, str2))
        printf("A string '%s' ocorre dentro de '%s'\n",str2, str1);
    else
        printf("A string '%s' nao ocorre dentro de '%s'\n",str2, str1);


    return 0;
}
