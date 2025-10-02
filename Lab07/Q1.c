/*
Basic Function Calls Write a program that defines three functions:
• void greet() – prints a welcome message.
• int add(int a,int b) – returns the sum of two integers.
• float circleArea(float r) – returns the area of a circle.
Call these functions from main() with user input.
*/
#include<stdio.h>
void greet();
int add(int a,int b);
float circleArea(float r);
int main()
{
   greet();
   int a,b;
   printf("Enter the two numbers to be added:");
   scanf("%d %d",&a,&b);
   add(a,b);
   float r;
   printf("Enter the radius of circle:");
   scanf("%f",&r);
   circleArea(r);
   return 0;
}
void greet()
{  char name[100];
    printf("Enter your first name:");
    scanf("%s",&name);
    printf("Hello %s ,nice to meet you\n");
}
int add(int a,int b)
{
    int sum=a+b;
    printf("sum=%d\n",sum);
}
float circleArea(float r)
{
    float area=3.14*r*r;
    printf("Area of circle of given radius:%f\n",area);
}