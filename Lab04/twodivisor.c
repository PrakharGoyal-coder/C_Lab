/*Write a program that asks the user for a positive integer and returns how many times the number can
be divided by 2 before it becomes less than or equal to 1. For example:
• Input: 32; Output: 5
• Input: 31; Output: 5
• Input: 33; Output: 6
*/
#include<stdio.h>
int main()
{
    float num; 
    printf("Enter the number:");
    scanf("%f",&num);
    if(num<=0){
    printf("error:no should be positive");
    }
    else
    {
       int count =0; //counter variable to store no. of times no is divided by 2
       while(num>1)
        {
           num=num/2;
           count++;
        }
        printf("%d",count);
  
  }
  return 0;
}