// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>

void prime_factors(int);

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    prime_factors(num);
    return 0;
}

void prime_factors(int num)
{
    int i, j, m;
    for (i = 2; i <= num / 2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }

        if (j == i)
        {
            if (num % i == 0)
            {
                m = num;
                while (m)
                {
                    if (m % i == 0)
                    {
                        printf("%d ", i);
                    }else{
                        break;
                    }
                    m/=i;
                }
            }
        }
    }
}