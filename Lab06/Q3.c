#include<stdio.h>
 int main()
{
    int m,n;
    int p,q;
    printf("Enter size of 1st matrix  (rows columns): ");
    scanf("%d %d",&m,&n);
    printf("Enter size of 2nd matrix  (rows columns): ");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
       printf("Matrix cannot be multiplied");
       return 0;
    }
    int arr1[m][n];
    int arr2[p][q];
    printf("Enter elements for 1st matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");
    
    printf("Enter elements for 2nd matrix:\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int prod[m][q];
     // Initialize result matrix to 0
    for (int i = 0; i < m; i++){
        for (int j = 0; j < q; j++){
            prod[i][j] = 0;
        }
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<n;k++)
            {
                prod[i][j] += +( arr1[i][k]*arr2[k][j] );
            }
        }
    }
    printf("Printing product matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d\t",prod[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
    
}