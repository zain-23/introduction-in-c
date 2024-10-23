#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {34, 12, 5, 67, 23, 1, 89, 45};
    
    // Selection Sort
    for(int i = 0;i < 8;i++)
    {
      int minNumber = i;
      for(int j = i + 1; j < 8; j++)
      {
        if(numbers[j] > numbers[minNumber])
        {
            minNumber = j;
        }
      }
      int temp = numbers[minNumber];
      numbers[minNumber] = numbers[i];
      numbers[i] = temp;
    }
    for (int i = 0; i < 8; i++) {
        printf("%i\n", numbers[i]);
    }
}