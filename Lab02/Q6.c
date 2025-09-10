/*
WAP in C that read two strings and join together using strcat() and finally print them.
*/
#include<stdio.h>
#include<string.h>
int main()
{
   char s1[50],s2[50];
   printf("Enter the first string without any whitespace:");
   scanf("%s",s1);  
   printf("Enter the second string without any whitespace::");
   scanf("%s",s2);  

   strcat(s1,s2);
   printf("new joined string:%s",s1);
   return 0;
}