/*
Write a program that prompts the user for a positive integer and determines whether the number is a
prime.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a positive number:\n");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("error:positive ni. not entered\n");

    }
    else
     {
        int count=0;// counter variable to count no. of factors
        for(int i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d is a prime number",num);
        }
        else{
        printf("%d is NOT a prime number",num);
        }
    }
    return 0;
    
}