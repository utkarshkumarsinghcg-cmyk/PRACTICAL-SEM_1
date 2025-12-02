// Read an integer and printf  whether it is positive ,negative or zero

#include <stdio.h>

int main()
{
    int num;
    printf("Enter an number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("You entered a positive number ");
    }
    else if (num < 0)
    {
        printf("You entered a negative number ");
    }
    else
    {
        printf("You entered zero.");
    }
    return 0;
}