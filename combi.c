// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
#include<stdio.h>
int fact(int num)
{
    int f = 1;
    while (num)
    {
        f *= num--;
    }
    return f;
}

int combi_num(int n,int r){
 return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    printf("%d",combi_num(10,7));
    return 0;
}