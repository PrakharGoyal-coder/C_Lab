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

}