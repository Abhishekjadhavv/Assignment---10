// Write a function to check whether a given number contains a given digit or not.
// (TSRS)

#include <stdio.h>
int contains_digit(int num, int digit);
int main()
{
    int num, digit;

    printf("Enter a number and a digit");
    scanf("%d%d", &num, &digit);

    if (contains_digit(num, digit))
    {
        printf("this number is contains %d",digit);
    }
    else
    {
        printf("this number is not contains %d",digit);
    }

    return 0;
}

int contains_digit(int num, int digit)
{
    int r;
    while (num)
    {
        r = num % 10;
        if (r == digit)
        {
            return 1;
        }
        num /= 10;
    }
    return 0;
}