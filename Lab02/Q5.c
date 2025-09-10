/*
WAP in C that takes five integers from the user and print their average
*/
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5; // to store 5 numbers
    float avg;  //to store average
    //inputting the numbers
    printf("Enter 5 numbers:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);
    avg=(n1+n2+n3+n4+n5)/5;
    printf("Average=%f",avg);
    return 0;
}