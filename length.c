#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
//  Make to Upper Case without library
   string s = get_string("BEFORE :");
   printf("AFTER ");

   // for(int i = 0;i < strlen(s);i++)
   // {
   //   if(s[i] >= 'a' && s[i] <= 'z')
   //   {
   //      printf("%c", s[i] - 32);
   //   }
   //   else{
   //      printf("%c", s[i]);
   //   }
   // }
   // with library 
   for(int i = 0;i < strlen(s);i++)
   {
     if(islower(s[i]))
     {
        printf("%c", toupper(s[i]));
     }
     else{
        printf("%c", s[i]);
     }
   }
}