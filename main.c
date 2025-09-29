#include <stdio.h>
#include <stdbool.h>
int main(void) {
    char stringa[]="i topi non avevano nipoti";
    char *p1=stringa;
    char *p2=stringa;
    bool palindromo=true;

    while (*p2!='\0')
    {
        p2++;
    }
    p2--;

    while (p1<p2)
    {
        if (*p1==' ')
            p1++;

        if (*p2==' ')
            p2--;

        if (*p1!=*p2) {
            palindromo=false;
        }
        p1++;
        p2--;
    }

    if (palindromo) {
        printf("palindromo\n");
    }else {
        printf("non palindromo\n");
    }
    return 0;
}
