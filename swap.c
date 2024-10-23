#include <stdio.h>

void swap(int *x,int *y);

int main(void)
{
    int x = 1;
    int y = 2;
    swap(&x , &y);
    printf("%i : %i\n",x,y);
}

void swap(int *x,int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}