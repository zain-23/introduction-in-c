#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {34, 12, 5, 67, 23, 1, 89, 45, 98, 99, 103, 106, 101, 199, 122, 111, 223};

    // Selection Sort
    // for(int i = 0;i < 8;i++)
    // {
    //   int minNumber = i;
    //   for(int j = i + 1; j < 8; j++)
    //   {
    //     if(numbers[j] > numbers[minNumber])
    //     {
    //         minNumber = j;
    //     }
    //   }
    //   int temp = numbers[minNumber];
    //   numbers[minNumber] = numbers[i];
    //   numbers[i] = temp;
    // }
    // for (int i = 0; i < 8; i++) {
    //     printf("%i\n", numbers[i]);
    // }
     int lengthofarray = sizeof(numbers)/ sizeof(numbers[0]);
    // Bubble Sort
    for(int i = 0;i < lengthofarray - 1;i++)
    {
      for(int j = 0; j < lengthofarray - i - 1;j++)
      {
         if(numbers[j] > numbers[j + 1])
         {
           int temp = numbers[j];
           numbers[j] = numbers[j + 1];
           numbers[j + 1] = temp;
         }
      }
    }
    for (int i = 0; i < lengthofarray; i++) {
        printf("%i\n", numbers[i]);
    }
}