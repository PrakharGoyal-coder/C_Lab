/*
WAP in C that takes input length and width from the user.
For each of the following expressions, determine the output value and the data type of the result.
• length / 3
• width / 2
• length / 3.0
• length / width
• (width + length) / length > length / width
*/
#include<stdio.h>
#include<stdbool.h>

int main()
{
   int length,width;
   printf("Enter the length:\n");
   scanf("%d",&length);    
   printf("Enter the width:\n");
   scanf("%d",&width);

   //printing
   printf("length/3=%d , integer\n",(length/3));
   printf("width/2=%d , integer\n",(width/2));
   printf("length/3.0=%f , float\n",(length/3.0));
   printf("length/width=%d , integer\n",(length/width));
   bool expr=((width+length)/length>width+length);
   printf("Expression 5= %d , integer\n",expr);

   return 0;
}