// Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)
#include <stdio.h>

int fact(int num)
{
    int f = 1;
    while (num)
    {
        f *= num--;
    }
    return f;
}

int perm(int n, int r)
{
    return fact(n) / fact(n - r);
}

int main()
{
    printf("%d", perm(5, 4));
    return 0;
}