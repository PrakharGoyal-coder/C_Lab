#include<stdio.h>
int main()
{
   
    int arr[5];
    printf("Enter numbers in the array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    //printing 1st part
    printf("Printing orignal array:\n");
    for(int i=0;i<5;i++)
     {
         printf("%d ",arr[i]);
     }
     printf("\n");
     //printing 2nd and 3rd and 4th point
     int max=arr[0];
     int min=arr[0];
     int sum=0;
     for(int i=0;i<5;i++)
     {  sum=sum+arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
     }
     printf("Maximum number:%d\n",max);
     printf("Minimum number:%d\n",min);
     printf("sum:%d\n",sum);
}
