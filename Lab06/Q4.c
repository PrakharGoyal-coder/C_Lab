#include<stdio.h>
#include<stdlib.h>  // to use abs 
int main()
{
    int n;
    printf("Enter the size of matrix :");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Displaying entered matrix:\n");
     for(int i=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        int sum=0;
        int diag=abs( arr[i][i] );
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            sum=sum+abs(arr[i][j]);
        }
        if(diag<sum)
        {
            printf("Not diagonally dominant");
            return 0;
        }
    }
    printf("Matrix is diagonally dominant");
    return 0;
}
