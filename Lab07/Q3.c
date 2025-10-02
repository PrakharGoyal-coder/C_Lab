/*
Create a function long factorial(int n) to compute n!. Use it to calculate nCr.
Take n and r from the user.
*/
#include<stdio.h>
long factorial(int n);
int main()
{
   int n,r;
   printf("Enter the value of n and r for nCr:\n");
   scanf("%d %d",&n,&r);
   if(n<0 || r<0 || (r>n))
   {
    printf("Invalid inputs\n");
    return 0;
   }
   long n_fact=factorial(n);
   long r_fact=factorial(r);
   long n_r_fact=factorial(n-r);
   long nCr=n_fact/(r_fact*n_r_fact);
   printf("nCr=%ld",nCr);
   return 0;
}

long factorial(int n)
{
    long fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
