#include <stdio.h>

int main()
{
    int number;
    float float_number;
    printf("Enter a number: ");
    scanf("%d", &float_number);

    number = float_number;

    if (number <= 0)
    {
        printf("Given number is not a nagetive number\n");
    }
    else if (float_number != number)
    {
        /* code */
    }

    return 0;
}