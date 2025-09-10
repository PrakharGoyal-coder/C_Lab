/*
Write a program checkdivisor.c that takes as input from the user 2 numbers, and checks if the smaller
number is a divisor of the larger number. It should display the appropriate output message.
*/
#include<stdio.h>
int main()
{
    int a,b; //to store 2 numbers
    //inputting the 2 numbers
    printf("Enter two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=b)
    {
        if(b==0)
        {
            printf("Error : Smaller no. is 0");
        }
        else if(a%b==0)
        {
            printf("%d is a divisor of %d\n",b,a);
        }
         else
        {
                printf("%d is not a divisor of %d",b,a);    
        }
    }
    if(a<b)
    {
        if(a==0)
        {
            printf("Error : Smaller no. is 0");
        }
        else if(b%a==0)
        {
            printf("%d is divisor of %d",a,b);
        }
        else
        {
             printf("%d is not a divisor of %d",a,b);
        }
    }
    return 0;

}