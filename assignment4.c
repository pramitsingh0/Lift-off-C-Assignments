#include <stdio.h>

int main (void)
{
    int n;
    printf("enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //print the largest number
    int large = arr[0];
    for (int j = 0; j < n; j++)
    {
        if (large < arr[j])
        {
            large = arr[j];
        }
        
    }
    printf("The largest number is %d\n", large);
    
    //print the smallest number
    int small = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (small > arr[i])
        {
            //todo
            small = arr[i];
        }
        
    }
    printf("The smallest number is %d\n", small);
    
}