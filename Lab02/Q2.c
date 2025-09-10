/*WAP to compute 1/2π , where π = 3.1415926.
 Display the result up to 6 decimal places.
*/
#include<stdio.h>
int main()
{
    float pi =3.1415926;

    float result=1/(2*pi);
    printf("Result=%.6f\n",result);
    return 0;
}