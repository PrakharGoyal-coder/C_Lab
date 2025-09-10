/*Write a program asciicheck.c that takes as input an integer from the user. The program must output
the hexadecimal value and octal value of the input. Further, if the input is between 32 and 126, then
the program must output the ascii character corresponding to that input integer.*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    //printing in hexadecimal and octal
    printf("Hexadecimal: %x\n",num);
    printf("Octal:%o\n",num);

    //checking if printable ASCII
    if(num >=32 && num<=126)
    {
        printf("ASCII Character: %c \n",(char)num);

    }
    else
    {
        printf("No printable ASCII character for this value.\n");

    }
}