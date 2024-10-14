#include <stdio.h>

// tell the compiler this two function not exists but later on this should be exists;
int get_sizes(void);
void print_grid(int size);

int main(void)
{
// get sizes
   int n = get_sizes();
// print grid
   print_grid(n);
 
}

// learn functions
int get_sizes(void)
{
   int n;
   do
   {
      n = 10;
   }
   while(n < 1);
   return n;
}

// print grid
void print_grid(int size)
{
   for(int i = 0; i < size; i++)
   {
     for(int j = 0; j < size; j++)
     {
        printf("#");
     }
     printf("\n");
   }
}