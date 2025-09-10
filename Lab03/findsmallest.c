/*
Write a program findsmallest.c that takes as input from the user 3 numbers, and prints the smallest
of the three. 
*/
#include<stdio.h>
int main()
{
    int a,b,c;
   printf("enter three numbers:");
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   int smallest;
   if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("The smallest number is: %d\n", smallest);
   return 0;
}