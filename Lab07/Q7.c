/*
Create a function int isPalindrome(int n) that returns 1 if an integer is a palindrome, else 0. Test
the function on multiple user–entered numbers.
*/
#include<stdio.h>
int isPalindrome(int num);
int main()
{   int num=0;
    printf("Enter the  numbers to be checked as palindrome(press -ve number to exit):\n");
    while(1)
    {     scanf("%d",&num);
        if(num<0)
        {
            break;
        }
        int result=isPalindrome(num);
        
        if(result==1)
        {
            printf(" %d is Palindrome\n",num);

        }
        else{
            printf("%d is NOT Palindrome\n",num);
        }
    }
    return 0;

}
int isPalindrome(int num)
{  if(num/10==0)
    {
        printf("Single digit number");
        return 1;
    }
    int t=num;
    int rev=0;
    while(t>0)
    {  int rem=t%10;
        rev=rev*10+rem;
        t=t/10;
    }
    if(rev==num)
    {
        return 1;
    }
    else {
    return 0;}
}
