// Write a function to calculate simple interest. (TSRS)

#include<stdio.h>

int simple_interest(int,int,int);

int main(){

   int p,r,t,si;

   printf("Enter principal,rate and time");
   scanf("%d%d%d",&p,&r,&t);

   si = simple_interest(p,r,t);

   printf("simple interest is %d",si); 
   
   return 0;
}

int simple_interest(int p,int r,int t){
 return (p*r*t)/100;
}