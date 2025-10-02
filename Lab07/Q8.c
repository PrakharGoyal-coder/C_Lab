/*
Write a menu-driven program with the following user-defined functions:
• int factorial(int n)
• int isPrime(int n)
• int reverseNumber(int n)
Allow the user to choose an operation repeatedly until they select Exit.
*/
#include<stdio.h>
int factorial(int n);
int isPrime(int n);
int reverseNumber(int n);

int main()
{
    while(1)
    {   int choice;
        printf("Menu\n");
        printf("1-factorial\n");
        printf("2-prime\n");
        printf("3-reverse the number\n");
        printf("0 -exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        int num=0;
        if(choice!=0)
        {
        printf("Enter the number:");
        scanf("%d",&num);}
        switch(choice)
        {
            case 1:  {
                      int fact=factorial(num);
                      printf("Factorial=%d\n",fact);
                      break;
                     }
            case 2:   {
                           int prime=isPrime(num);
                              if(prime==1){
                                  printf("%d is prime\n",num);
                                  }
                               else
                               {
                                 printf("%d is NOT prime\n",num);
                                 }
                                 break;
                        }
            case 3:   { int rev=reverseNumber(num);
                       printf("Reverse number=%d\n",rev);
                       break;
                        }
            case 0:   {
                        return 0;
                          break;
                       }
            default:  printf("Invalid choice");
        }
      
        
       
    }
      return 0;
}
int factorial(int n)
{  int fact=1; 
    for(int i=1;i<=n;i++)
    {
    fact=fact *i;
    }
    return fact;
}
int isPrime(int n)
{    int c=0;
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
int reverseNumber(int n)
{
    int rev=0;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}