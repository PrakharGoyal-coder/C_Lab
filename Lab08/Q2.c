/*
Q2. Array of Structures: Extend Q1 to find:
• The student with the highest marks.
• The average marks of the class.
• The list of students scoring above average.
*/
#include<stdio.h>
struct Student
{
    int roll;
    char name[100];
    float marks;
};
int main()
{
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct Student stu[100];
    for(int i=0;i<n;i++)
    {
        printf("Enter the details of student %d :\n",i+1);
        printf("Enter the roll number:");
        scanf("%d",&stu[i].roll);
        printf("Enter the name:");
        scanf("%s",stu[i].name);
        printf("Enter the marks:");
        scanf("%f",&stu[i].marks);

    }
    printf("Printing the details in tabular form:\n");
    printf("Roll Number\tName\tMarks");
    printf("\n");
   
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%f",stu[i].roll,stu[i].name,stu[i].marks);
        printf("\n");
    }
    
    float max_marks=stu[0].marks;
    float sum=0;

    for(int i=0;i<n;i++)
    {
        if(stu[i].marks>max_marks)
        {
            max_marks=stu[i].marks;
        }
        sum=sum+stu[i].marks;
    }
    printf("Details of student with highest marks:\n");
    for(int i=0;i<n;i++)
    {
        if(stu[i].marks==max_marks)
        {
            printf("Student Roll number:%d\n",stu[i].roll);
            printf("Student name:%s\n",stu[i].name);
            printf("Student marks:%f\n",stu[i].marks);
            printf("\n"); 
        }
    }
    float avg=sum/n;
    printf("Avgerage marks of class=%f\n",avg);
    printf("Printing students having marks:\n");
    for(int i=0;i<n;i++)
    {   if(avg>stu[i].marks)
        {
            printf("Student Roll number:%d\n",stu[i].roll);
            printf("Student name:%s\n",stu[i].name);
            printf("Student marks:%f\n",stu[i].marks);
            printf("\n"); 
        }
    }
    return 0;
}