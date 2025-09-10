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
    printf("\n");

    int new_arr[n];
    int count=0;
    new_arr[0]=arr[0];
    count++;

    for(int i=1;i<n;i++)
    {   int flag=0;
        for(int j=0;j<count;j++)
        {   
            if(arr[i]==new_arr[j])
            {
                flag=1;
            }
          
        }
          if(flag==0)
            {
                new_arr[count]=arr[i];
                count++;
            }

    }
    printf("Printing array after removing duplicates:\n");
    for(int i=0;i<count;i++)
     {
         printf("%d ",new_arr[i]);
     }
     printf("\n");
}