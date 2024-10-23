#include <stdio.h>

int main(void)
{
    // int n = 50;
    // int *p = &n;
    // printf("%i\n",*p);

    // how to use store data HI! without importing library
    char *s = "HI!";
    printf("%c\n",*s);
    printf("%c\n",*(s+1));
    printf("%c\n",*(s+2));
    printf("%c",*(s+3));
}