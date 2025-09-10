/*
WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative,
and Zeroes entered
*/
#include<stdio.h>
int main()
{
    int c;   //to count the no of integers user want to enter
    printf("Enter the count of integers to be taken input(>0):\n");
    scanf("%d",&c);
    int positive=0,negative=0,zeroes=0;
    printf("Enter the numbers:\n");
    for(int i=1;i<=c;i++)
    {
         int num;
         scanf("%d",&num);
         if(num<0)
        {
             negative++;
         }
        else if(num>0)
        {
              positive++;
        }
        else   // i.e num=0
        {
            zeroes++;
        }
    }
    printf("positive numbers=%d\n",positive);
   printf("negative numbers=%d\n",negative);
   printf("zeroes numbers=%d\n",zeroes);
   return 0;
    
}