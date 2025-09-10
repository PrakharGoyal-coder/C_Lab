/*
Ramanujan Number:
Definition: A Ramanujan Number is the smallest number that can be expressed as the sum of two
cubes in two different ways.

Task: Write a program (WAP) to print all such numbers up to a reasonable limit L.
Example: The first Ramanujan number is:
1729 = 123 + 13 = 103 + 93
Input: Limit L = 20
Output: The program should print all Ramanujan numbers (if any) within the given limit L.
*/ 
//Ramanujan Number
#include<stdio.h>
int main()
{
    int L;
    printf("Enter the number:");
    scanf("%d",&L);
    for(int i=1;i<=L;i++)
    {   
        int cubei=i*i*i;
        for(int j=i+1;j<=L;j++)
        {  
              int cubej=j*j*j;
            for(int k=1;k<=L;k++)
            {
                int cubek=k*k*k;
                for(int m=k+1;m<=L;m++)
                  {  
                    int cubem=m*m*m;
                    if((cubei+cubej)==(cubek+cubem))
                    {
                        if((i < k) || (i == k && j < m)) // to avoid duplicate pairs
                        printf("%d\n",cubei+cubej);
                              
                    }
                }
            }
        }
    }
    return 0;
}
