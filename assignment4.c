#include <stdio.h>

int main (void)
{
    int full, phy, maths, bio, comp, chem;
    float per;
    printf("Enter total marks: ");
    scanf("%i", &full);

    printf("Enter marks obtained!\n");

    printf("Physics: ");
    scanf("%i", &phy);

    printf("Maths: ");
    scanf("%i", &maths);

    printf("Computer: ");
    scanf("%i", &comp);

    printf("Chemistry: ");
    scanf("%i", &chem);

    printf("Biology: ");
    scanf("%i", &bio);

    per = ((float)(phy + maths + comp + chem + bio)/full) * 100;

    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;

}

