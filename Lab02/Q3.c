//WAP in C to solve a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c; //to store the coefficient of x^2,x,contant term
    printf("Enter the values of a,b,c of quadratic:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int disc=b*b-4*a*c;
    if(disc>=0)
    {
        float x1=(-b+sqrt(disc))/(2*a);
        float x2=(-b-sqrt(disc))/(2*a);
        printf("root 1=%f\n",x1);
        printf("root 2=%f\n",x2);
        
    }
    else {
        printf("Imaginary roots");
    }
    return 0;
}