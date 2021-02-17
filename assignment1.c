#include <stdio.h>

int main (void)
{
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number !=0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }
    printf("%d", sum);
    
    
}