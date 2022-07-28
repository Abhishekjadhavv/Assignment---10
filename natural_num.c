// Write a function to print first N natural numbers (TSRN)

#include <stdio.h>
void natural_num(int num);
int main()
{

    int n;
    printf("Enter a number");
    scanf("%d", &n);
    natural_num(n);
    return 0;
}

void natural_num(int num)
{
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
}