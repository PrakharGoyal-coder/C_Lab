/*
Write functions to
• Find the maximum and minimum in an integer array.
• Compute the average of array elements.
• Search for an element using linear search.
Demonstrate their use in a single program.
*/
#include<stdio.h>
void max_min(int arr[],int n);
float average(int arr[],int n);
void linear_search(int arr[],int n,int x);

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max_min(arr,n);
    float avg=average(arr,n);
    printf("Average of array elements=%f\n",avg);
    int x=0;
    printf("Enter the element to be searched:");
    scanf("%d",&x);
    linear_search(arr,n,x);

}
void max_min(int arr[],int n)
{
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];

        }
        if(min>arr[i])
        {
            min=arr[i];
        }

    }
    printf("Maximum number=%d\n",max);
    printf("Minimum number=%d\n",min);
}
float average(int arr[],int n)
{
  float avg=0;
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  avg=(float)sum/n;
  return avg;
}
void linear_search(int arr[],int n,int x)
{
    
    for(int i=0;i<n;i++)
    {
      if (arr[i]==x)
      {
        printf("Found at index %d",i+1);
        return;
      }   
      
    }
    printf("Element Not found");
}