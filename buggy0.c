#include <stdio.h>

float average(int length,int array[]);
int main(void)
{
    const int N = 3;

    int scores[N];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("%f\n",average(N,scores));
}

float average(int length,int array[])
{
    int sum = 0;
    for(int i = 0;i < length;i++)
    {
      sum += array[i];
    }
    return sum / (float) length;
}
