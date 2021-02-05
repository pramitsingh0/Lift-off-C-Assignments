#include <stdio.h>

int main (void)
{
    float rad;
    printf("Enter a radius: ");
    scanf("%f", &rad);
    printf("Diameter: %.2f\n", rad * 2);
    printf("Area: %.2f\n", 3.14 * (rad*rad));
    printf("Circumference: %.2f\n", 3.14 * rad * 2);
}