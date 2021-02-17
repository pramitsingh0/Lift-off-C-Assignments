#include <stdio.h>
#include <string.h>

int main (void)
{
    char scentence [100];
    int words = 0;

    printf("Enter a scentence: ");
    gets(scentence);

    
    for (int i = 0; scentence[i] != '\0'; i++)
    {
        if (scentence[i] == ' ')
        {
            words ++;
        }
    }
    printf("Number of words: %i\n", words + 1);
    
}