/*
String Operations using Functions Without using <string.h>, write functions to:
• Find the length of a string.
• Reverse a string.
• Compare two strings for equality
Call these functions from main().
*/
#include<stdio.h>
int length(char ch[100]);
void reverse(char ch[100]);
void compare(char s1[100],char s2[100]);
int main()
{
    char str[100];
    printf("Enter string:\n");
    fgets(str,100,stdin);
    int len=length(str);
    printf("Length=%d\n",len);
    reverse(str);
    char str2[100];
   printf("Enter second string:");
   fgets(str2,100,stdin); 
   compare(str,str2);
   return 0;
    
}

int length(char ch[100])
{
    int len=0;
    for(int i=0;ch[i]!='\n';i++)
    {
        len++;
    }
    return len;

}
void reverse(char ch[100])
{
    char rev[100];
    int len=length(ch);
    int x=0;
    for(int i=len-1;i>=0;i--)
    {
        rev[x]=ch[i];
        x++;
    }    
    rev[x]='\0';
    printf("reversed string=");
    for(int i=0;rev[i]!='\0';i++)
    {
        printf("%c",rev[i]);
    
    }
    printf("\n");
}
void compare(char s1[100],char s2[100])
{   printf("Checking case sensitively:\n");
   int len1=length(s1);
   int len2=length(s2);
   if(len1!=len2)
   {
    printf("Cannot be equal as lengths are different\n");
    return;
   }
   if(len1==len2)
   {
      for(int i=0;s1[i]!='\n';i++)
      {
        if(s1[i]!=s2[i])
        {
            printf("Not equal");
            return;
        }
        
      }
      printf("both are equal ");
   }
}
