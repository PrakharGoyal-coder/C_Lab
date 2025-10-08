#include<stdio.h>
struct Complex
{
    int real;
    int img;
};
struct Complex add(struct Complex n1,struct Complex n2);
struct Complex multiply(struct Complex n1,struct Complex n2);
void display(struct Complex n1);
int main()
{
    struct Complex n1;
    struct Complex n2;
    
    printf("Enter real and imaginary values of first complex number:");
    scanf("%d %d",&n1.real,&n1.img);
    
    printf("Enter real and imaginary values of second complex number:");
    scanf("%d %d",&n2.real,&n2.img);

    struct Complex n3;  //to store addition of two complex nmbers
    struct Complex n4;  // to store product of two complex numbers
    n3=add(n1,n2);
    n4=multiply(n1,n2);
    printf("Entered complex numbers are:\n");
    display(n1);
    display(n2);
    printf("Sum=");
    display(n3);
   
    printf("Product=");
    display(n4);
   
    return 0;
}
struct Complex add(struct Complex n1,struct Complex n2)
{
    struct Complex n3;
    n3.real=n1.real+n2.real;
    n3.img=n1.img+n2.img;
    return n3;
}
struct Complex multiply(struct Complex n1,struct Complex n2)
{
    struct Complex n3;
    n3.real=n1.real*n2.real-n1.img*n2.img;
    n3.img=n1.real*n2.img+n1.img*n2.real;
    return n3;
}
void display(struct Complex n1)
{   if(n1.img<0)
    {
        printf("%d%di",n1.real,n1.img);
        printf("\n");
    }
    else
    {
    printf("%d+%di",n1.real,n1.img);
    printf("\n");
   }
}