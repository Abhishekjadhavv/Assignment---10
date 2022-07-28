// Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)

#include <stdio.h>
int iseven(int);
int main()
{

    int num;
    printf("Enter a number");
    scanf("%d", &num);

    if (iseven(num))
    {
        printf("Even number");
    }
    else
    {
        printf("Odd Number");
    }

    return 0;
}

int iseven(int n)
{
    return n % 2 == 0;
}