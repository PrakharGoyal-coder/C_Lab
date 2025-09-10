/*Write a C program to find the intersection of two arrays (common elements).
Example:
Input: {1, 2, 3, 4}, {3, 4, 5, 6}
Output: {3, 4}
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of array elements:\n");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    printf("Enter numbers in  first array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter numbers in the second array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    int intersection[n];
    int x=0; //to store no. of common elements
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n;j++)
        {
         if(arr1[i]==arr2[j])
         {
            intersection[x]=arr1[i];
            x++;
         }
        }
    }
    printf("printing common elements:\n");
    for(int i=0;i<x;i++)
    {
        printf("%d ",intersection[i]);
    }
    

}