
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("minutes: ");
    int minutes = GetInt();
    
    if (minutes > 0)
    {
        int bottles = ( 128 * (1.5 * minutes) ) / 16;
        printf("bottles: %i\n", bottles);
    }
    else
    {
        printf("Number is not an integer\n");
    }
}
