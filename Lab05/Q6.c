/*
Write a C program that finds the second largest and second smallest numbers in a array of n
numbers.
*/
#include<stdio.h>
int main()
{
    int n;//to store number of elements in the array
    printf("Enter the no. of elements in the array(>3):");
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
     printf("\n");
     int max=arr[0];
     int min=arr[0];
     int sec_smallest;
     int sec_largest;
     for(int i=0;i<n;i++)
     {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
     }
     for(int i=0;i<n;i++)
     {
        if(sec_smallest>arr[i] && arr[i]!=min)
        {
            sec_smallest=arr[i];
        }
        if(sec_largest<arr[i] && arr[i]!=max)
        {
            sec_largest=arr[i];
        }
     }
     printf("Second smallest number:%d\n",sec_smallest);
     printf("second largest number:%d\n",sec_largest);
     return 0;
}
