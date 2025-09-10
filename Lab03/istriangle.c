/*
If you are given three sticks, you may or may not be able to arrange them in a triangle. For example,
if one of the sticks is 12 inches long and the other two are one inch long, it is clear that you will not
be able to get the short sticks to meet in the middle. For any three lengths, there is a simple test to
see if it is possible to form a triangle: “If any of the three lengths is greater than the sum of the other
two, then you cannot form a triangle. Otherwise, you can.”
Write a program named istriangle.c that prompts the user to input three stick lengths, and then prints
either “Yes. Triangle possible” or “No” depending on whether you can or cannot form a triangle from
sticks with the given lengths.
*/
#include<stdio.h>
int main()
{
   int a,b,c; //to store 3 sides of a triangle
   //inputting the sides
   printf("Enter the sides:");
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);

    if((a<=0)||(b<=0)||(c<=0))
      { printf("sides must be positive\n");
      }
    else 
    {
        if(a>(b+c)||b>(a+c)||c>(a+b))
        {
             printf("No ,Traiangle cannot be formed\n");
        }
        else
         {
               printf("Yes,Triangle can be formed\n");
         }
    }
    return 0;
}