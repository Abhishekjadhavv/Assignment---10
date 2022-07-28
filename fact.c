// Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>

int fact(int);

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    printf("factorial of %d is %d", num, fact(num));
    return 0;
}

int fact(int num)
{
    int f = 1;
    while (num)
    {
        f *= num--;
    }
    return f;
}