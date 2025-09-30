/*Write a C program that, given a array of n numbers, counts and prints the number of negative numbers
and the number of positive numbers.
Test your program with this array:
{3,−4,−6, 9, 0, 7, 2, 10,−2,−1}
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
    return 0;
}