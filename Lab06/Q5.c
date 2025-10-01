/*
Saddle point in a matrix is an element aij that is simultaneously:
• the minimum element in its row, and
• the maximum element in its column.
Write a program to find the saddle point(s) of a given n × n matrix
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of matrix:");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing entered matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    //saddle point checking
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int row_min=arr[i][j],col_max=arr[i][j];
            for(int k=0;k<n;k++)
            {
                if(row_min>arr[i][k])
                {
                    row_min=arr[i][k];
                }
                if(col_max<arr[k][j])
                {
                    col_max=arr[k][j];
                }
            }
            if(arr[i][j]==row_min && arr[i][j]==col_max)
            {
                printf("Saddle point=%d\n",arr[i][j]);
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("No saddle point");
    }
    return 0;
}