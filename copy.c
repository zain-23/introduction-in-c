#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *c = get_string("s: ");
    char *t = mallow(strlen(s) + 1);

    for(int i = 0, n = strlen() + 1; i < n; i++)
    {
       t[i] = c[i];
    }
    
    if(strlen(s) > 0)
    {
      t[0] = toupper(t[0]); 
    }

    printf("S: %s\n",c);
    printf("T: %s\n",t);
}