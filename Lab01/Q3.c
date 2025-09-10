//input your name and age and print
#include<stdio.h>
int main()
{
    char name[50]; //to store name
    int age;  //to store the age
//taking input from user
  printf("Enter your first name:");
  scanf("%s",name);
  printf("Enter your age:");
  scanf("%d",&age);
  printf("Name:%s\n",name);
  printf("Age:%d\n",age);
  return 0;
    
}
