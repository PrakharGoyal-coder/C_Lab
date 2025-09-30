/*
Update Q1 to output two arrays:
• one array containing only the negative numbers,
• another array containing the non-negative numbers.
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
    int pos_arr[pos_count];  //array to store positive numbers
    int neg_arr[neg_count];  //array to store negative numbers
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            pos_arr[x]=arr[i];
            x++;
        }
        else
        {
           neg_arr[y]=arr[i];
            y++;
        }
        

    }
    printf("Printing positive array:");
    for(int i=0;i<pos_count;i++)
    {
        printf("%d ",pos_arr[i]);
    }
    printf("\n");
     printf("Printing positive array:");
    for(int i=0;i<neg_count;i++)
    {
        printf("%d ",neg_arr[i]);
    }
    return 0;
}