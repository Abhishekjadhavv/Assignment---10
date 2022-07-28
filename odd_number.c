// Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>
void odd_numbers(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    odd_numbers(n);
    return 0;
}

void odd_numbers(int n){
   for(int i = 1;i<=n;i++){
       printf("%d ",2*i-1);
   }
}