/*
Q4. Nested Structures: Create a structure Date with day, month and year. Use it inside an Employee
structure with name and salary. Write functions to:
• Input and display employee details.
• Print the names of employees who joined after the year 2020.
*/
#include<stdio.h>
struct Date
{
    int day,month,year;
};
struct Employee
{ char name[100];
    float salary;
   struct Date join;

};

void input_display(struct Employee arr[],int n);
void emp_join_2020(struct Employee arr[],int n);
int main()
{   int n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
   struct Employee arr[n];
   input_display(arr,n);
   emp_join_2020(arr,n);
   return 0;
}
void input_display(struct Employee arr[],int n)
{ 
    for(int i=0;i<n;i++)
    {
    printf("Enter the details of employee %d:\n",i+1);
    printf("Enter the name:");
    scanf("%s",arr[i].name);
    printf("Enter the salary:");
    scanf("%f",&arr[i].salary);
    printf("Enter the joining date DD MM YY:");
    scanf("%d %d %d",&arr[i].join.day,&arr[i].join.month,&arr[i].join.year);
    }

    printf("Printing Employee details:\n");
    printf("Name\t\t Salary\t\t Joining date\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t\t%f\t\t%d-%d-%d\n",arr[i].name,arr[i].salary,arr[i].join.day,arr[i].join.month,arr[i].join.year);
    }

}
void emp_join_2020(struct Employee arr[],int n)
{
    printf("Printing the employee details who joined after 2020\n");
    printf("Employee Name\t\tEmployee Salary\t\tJoining date\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i].join.year>=2020)
        {
             printf("%s\t\t%f\t\t%d-%d-%d\n",arr[i].name,arr[i].salary,arr[i].join.day,arr[i].join.month,arr[i].join.year);
        }
    }
}