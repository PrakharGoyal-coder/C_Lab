/*
A square matrix of size n×n is called a magic square if the sum of every row, every column, and both
diagonals are equal.
Write a C program to check whether a given matrix is a magic square or not.
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
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+arr[0][i];
    }
    for(int i=0;i<n;i++)
    {   int sumrow=0;
      for(int j=0;j<n;j++)
      {
          sumrow+=arr[i][j];
      }
      if(sumrow!=sum)
      {
        printf("Not a magic square");
        return 0;
      }
    }
    for(int i=0;i<n;i++)
    { int sumcol=0;
      for(int j=0;j<n;j++)
      {
        sumcol+=arr[j][i];
      }
      if(sumcol!=sum)
      {
          printf("Not a Magic square");
          return 0;
      }
    }
    int sumdiag1=0,sumdiag2=0;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(i==j)
        {
          sumdiag1+=arr[i][j];
        }
        if(i+j==(n-1))
        {
          sumdiag2+=arr[i][j];
        }
      }
    }
    if(sumdiag1!=sum || sumdiag2!= sum)
    {
      printf("Not a Magic square");
      return 0;
    }
    if(sumdiag1==sum && sumdiag2==sum)
   { 
    printf("This is a Magic square");
   }
   return 0; 

}