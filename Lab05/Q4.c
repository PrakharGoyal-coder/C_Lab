/*
Write a C program that takes as input a array and returns another array that contains each element
of the original array twice.
Example:
Input: {2, 3, 1}
Output: {2, 2, 3, 3, 1, 1}
*/
#include<stdio.h>
int main()
{
    int n;//to store number of elements in the array
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter numbers in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[2*n];
    int m=0;
    for(int i=0;i<(2*n);i++)
   {
     arr2[i]=arr1[m];
     if(i%2==1)
     {
        m++;
     }
   }
   printf("Printing orignal array:\n");
    for(int i=0;i<n;i++)
     {
         printf("%d ",arr1[i]);
     }
     printf("\n");
    printf("Printing required array:\n");
    for(int i=0;i<(2*n);i++)
     {
         printf("%d ",arr2[i]);
     }
     printf("\n");
    return 0;
}
