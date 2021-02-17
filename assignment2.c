#include <stdio.h>

int main (void)
{
    int n, sum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the numbers: ");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr[j]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
        {
            sum += arr[i];
        }
        if (i%2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("The required sum is: %d", sum);
    
}