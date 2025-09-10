/*
Write a program to print the multiplication tables from 1 to 13, each up to 10 multiples. For example:
1 table: 1 2 3 4 5 6 7 8 9 10
2 table: 2 4 6 8 10 12 14 16 18 20
3 table: 3 6 9 12 15 18 21 24 27 30
...
*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=13;i++)
    {    
        printf("%d table : ",i);
        for(int j=1;j<=10;j++)
        {
              printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;
}