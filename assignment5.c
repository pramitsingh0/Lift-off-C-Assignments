#include <stdio.h>

int main (void)
{
    char alpha;
    printf("Enter an Alphabet: ");
    scanf("%c", &alpha);

    switch (alpha)
    {
    case 'a':
        printf("vowel\n");
        break;

    case 'u':
        printf("vowel\n");
        break;

    case 'o':
        printf("vowel\n");
        break;

    case 'i':
        printf("vowel\n");
        break;

    case 'e':
        printf("vowel\n");
        break;    
    default:
    printf("consonant\n");
        break;
    }
}