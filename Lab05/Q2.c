/*
Write a C program that, given a array of n numbers, outputs another array that contains the cumulative
sum.
Example:
Input: {3, 4, 6, 9, 0, 7, 2, 10, 2, 1}
Output: {3, 7, 13, 22, 22, 29, 31, 41, 43, 44}
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
    int sum=0;
    int arr2[n]; //array to store cumulative sum
    for(int i=0;i<n;i++)
    {
        sum=sum+arr1[i];
        arr2[i]=sum;
    }
    printf("Required array with cumulative sum:");
    for(int i=0;i<n;i++)
     {
         printf("%d ",arr2[i]);
     }
     return 0;

}