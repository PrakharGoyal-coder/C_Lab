/*
Write a program that prompts the user to input an integer n and returns the sum of the squares of
even numbers between 2 and n (inclusive).
*/
#include<stdio.h>
int main()
{
   int n;    // to store the no
   printf("Enter the value of n:");
   scanf("%d",&n);
   if(n<0)
   {
    printf("error:negative no. entered");

   }
   else
   {   int sum=0;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+(i*i);
        }
    }
    printf("Sum = %d",sum);

   }
   return 0;
}