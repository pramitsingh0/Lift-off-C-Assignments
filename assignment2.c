#include <stdio.h>

int main (void)
{
    float cel, fahren;
    printf("Enter temperature in celcius: ");
    scanf("%f", &cel);
    fahren = (cel * 9 / 5) + 32;
    printf("Temperature in fahrenheit: %0.2f", fahren);
}