/*
Write a C program to compute the determinant of a square matrix (size n × n, with n ≤ 3).
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
    printf("Displaying entered matrix:\n");
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int a= arr[0][0] * (arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1] ) ;
    int b= arr[0][1] *(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0] );
    int c= arr[0][2] * (arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0] );
    int det =a-b+c;
    printf("Determinant=%d",det);
    return 0;
}
