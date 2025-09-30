/*
Write a C program to check whether a given array of integers is a palindrome array. (An array is
palindrome if the first element equals the last, the second equals the second last, and so on.)
Example:
{1, 2, 3, 2, 1} → Palindrome
{1, 2, 3, 4} → Not Palindrome
*/
#include<stdio.h>
int main()
{
     int n;//to store number of elements in the array
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
     printf("Printing orignal array:\n");
    for(int i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     //checking if palindrome or not 
     for(int i=0;i<n/2;i++)
     {
        int x=arr[i];
        int y=arr[n-i-1];
        if(x!=y)
        {  printf("Not palindrome");
           return 0;
        }
     }
     printf("Palindrome");
     return 1;
     

}