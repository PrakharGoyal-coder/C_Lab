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
    return 0;

}