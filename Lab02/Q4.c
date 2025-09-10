/*
If you run a 10 kilometer race in 43 minutes 30 seconds:
• Find your average time per km.
• Find your average speed in km/h.
*/
#include<stdio.h>
int main()
{
    int distance;// to store distance
    float hrs,min,sec; // to store time in hrs min and seconds
    printf("Enter the distance travelled in km:\n");
    scanf("%d",&distance);
    printf("Enter the hrs\n");
    scanf("%f",&hrs);
    printf("Enter the minutes:\n");
    scanf("%f",&min);
    printf("Enter the sec:\n");
    scanf("%f",&sec);
    min=min+(sec/60.0);
    hrs=hrs+(min/60.0);
    float speed=distance/hrs; 
    printf("speed=%f km/hr\n",speed);
    float avg_time=hrs/distance;
    printf("average time=%f hrs",avg_time);    
    return 0;

}