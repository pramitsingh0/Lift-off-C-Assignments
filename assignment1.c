#include <stdio.h>

int main (void)
{
    int a, b;
    //taking in input
    printf("Enter two numbers to perform all arithmetic operations: ");    
    scanf(" %d %d", &a, &b);
    //printing out results
    printf("The product of both numbers is %d\n", a * b);
    printf("The result of division of first number by second number is: %.2f\n", (float)a / (float)b);
    printf("The sum of the numbers is: %d\n", a + b);
    printf("The difference of the numbers is : %d", a - b);
    
    
}