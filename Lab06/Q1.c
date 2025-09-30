#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of matrix:");
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
         int sumrow=0;
        for(int j=0;j<n;j++)
        {
            sumrow=sumrow+arr[i][j];
        }
        if(i==0)
        {
          sum=sumrow; 
        }
        if(sumrow!=sum)
        {
          printf("Not magic square");
           return 0;
        }

    }
   
    //checking for columns
    

    for(int i=0;i<n;i++)
    {   
         int sumcol=0;
        for(int j=0;j<n;j++)
        {
            sumcol=sumcol+arr[j][i];
        }
        if(i==0)
        {
          sum=sumcol; 
        }
        
        else if(sumcol!=sum)
        {
            printf("Not magic square");
            return 0;
        }

    }
    
    //checking diagonal sum
    int sumdiag1=0;
    int sumdiag2=0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            if(i==j){
            sumdiag1 +=arr[i][j];
          }
          if(i+j==(n-1))
          {
            sumdiag2 += arr[i][j];
          }
       } 
    }
    if(sumdiag1==sum && sumdiag2==sum)
    {
        printf("it is a magic square");
    }
    else
    {
     printf("It is not a magic square");
      return 0;
    }

}