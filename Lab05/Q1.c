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
    int neg_count=0; //to count no. of negative elements
    int pos_count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            neg_count++;
        }
        else
        {
            pos_count++;
        }
    }
    printf("Number of negative numbers in the array:%d\n",neg_count);
    printf("Number of positive numbers in the array:%d\n",pos_count);

}