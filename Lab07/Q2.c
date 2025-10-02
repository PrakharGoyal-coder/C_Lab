/*
Write a function int isPrime(int n) that returns 1 if n is prime, else 0. Use this function to:
(a) Display all prime numbers between two user–given limits.
(b) Find the nth prime number.
*/
#include<stdio.h>
int isPrime(int n);
int main()
{ 
    int m,n;

    printf("Enter the two limits(in ascending order) in which prime number is to be displayed:\n");
    scanf("%d %d",&m,&n);
    int count=0;
    printf("Checking and printing prime numbers:\n");
    for(int i=m;i<=n;i++)
    { 
        int result=isPrime(i);
        if(result==1){
            printf("%d  ",i);
            count++;
        }
    }
    if(count==0)
    {
        printf("No prime numbers in give range\n");
    }
    printf("\n");
    n=0;
    printf("Enter the value of n for nth prime number:");
    scanf("%d",&n);
    int counter=0;
    int k=1;
    while(counter<n)
    {
        int result2=isPrime(k);
        if(result2==1)
           {counter++;
        }
        
        if(counter==n)
        {
            printf("%d",k);
        }
        k++;
    }
}
int isPrime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
       if(n%i==0)
       {
        c++;
       }
       
    }
    if(c==2)
       {
        return 1;
       }
       else 
       {
        return 0;
       }
}
