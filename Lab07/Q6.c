/*
Define a recursive function int fib(int n) that returns the nth Fibonacci number. Use it to print the
first k terms of the series.
*/
#include<stdio.h>
int fib(int n);

int main()
{
    int k;
    printf("Enter the number of terms to be printed:");
    scanf("%d",&k);
    printf("Printing the series:\n");
    for(int i=1;i<=k;i++)
    {
        int ele=fib(i);
        printf("%d  ",ele);
    }
   return 0;
}
int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    
    int f=fib(n-1)+fib(n-2);
    return f;
}
