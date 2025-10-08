#include <stdio.h>

enum Weekday {MON = 1,TUE,WED,THU,FRI,SAT,SUN };
int main()
{
    int dayNum;
    enum Weekday day; // variable of enum type

    printf("Enter the number(1--7):");
    scanf("%d",&dayNum);
    if(dayNum<1||dayNum>7)
    {
        printf("Invalid input\n");
        return 0;
    }

    day=(enum Weekday)dayNum; 
    printf("Day %d corresponds to: ", dayNum);
    switch (day)
    {
        case MON: printf("Monday\n");
                   break;
        case TUE: printf("Tuesday\n"); 
                  break;
        case WED: printf("Wednesday\n");
                   break;
        case THU: printf("Thursday\n"); 
                   break;
        case FRI: printf("Friday\n");
                    break;
        case SAT: printf("Saturday\n"); 
                   break;
        case SUN: printf("Sunday\n");
                   break;
    }
    if (day>=MON && day<=FRI)
        printf("It is a Weekday\n");
    else
        printf("It is a Weekend\n");

    return 0;
}
