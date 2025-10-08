#include<stdio.h>

struct Student
{
    int roll;
    char name[100];
    float marks;

};
void add_Student(struct Student stu[],int* n);
void display_Students(struct Student stu[],int n);
void search_Student(struct Student stu[],int n);
void update_Marks(struct Student stu[],int n);
int main()
{   int choice;
    struct Student stu[100];
    int n=0;    //to store the number of students
    while(1)
    {
         printf("Menu\n");
         printf("1-Add a new Student record\n");
         printf("2-Display all Student records\n");
         printf("3-Search for a student by Roll number\n");
         printf("4-Upgrade marks of a student\n");
         printf("5-exit\n");
         printf("Enter your choice:");
    scanf("%d",&choice);
    
      switch(choice)
      {
        case 1: add_Student(stu,&n);
                break;
        case 2:  display_Students(stu,n);
                 break;
        case 3: search_Student(stu,n);
                break;
        case 4:update_Marks(stu,n);
                break;
        case 5: printf("Exiting the program");
                return 0;
        default: printf("Invalid choice");
     }
   }
}
void add_Student(struct Student stu[],int* n)
{
    
   printf("Enter the details of the student %d\n",*n+1);
   printf("Enter the roll number: ");
   scanf("%d",&stu[*n].roll);
   printf("Enter the Name: ");
   scanf("%s",stu[*n].name);
   printf("Enter the marks: ");
   scanf("%f",&stu[*n].marks);
   (*n)++;
   printf("Student record added successfully\n");
}
void display_Students(struct Student stu[],int n)
{
    if(n==0)
    {
        printf("\nNo record found.\n");
        return;
    }
    else
    {
        printf("Displaying student records\n");
        printf("Roll\tName\tMarks\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\t%s\t%.2f\n",stu[i].roll,stu[i].name,stu[i].marks);
        }

    }
}
void search_Student(struct Student stu[],int n)
{
    if(n==0)
    {
        printf("\n No Records available.\n");
        return;
    }
    int roll,found=0;
    printf("Enter Roll Number to be searched:");
    scanf("%d",&roll);

    for(int i=0;i<n;i++)
    {
        if(stu[i].roll==roll)
        {
            printf("Student Found\n");
            printf("Roll:%d\n",stu[i].roll);
            printf("Name:%s\n",stu[i].name);
            printf("Marks:%f\n",stu[i].marks);
            found=1;
            break;
        }

    }
    if(found==0)
    {
        printf("No student with roll number %d\n",roll);
    }
}
void update_Marks(struct Student stu[],int n)
{
    if(n==0)
    {
        printf("\n No Record found\n");
        return;
    }    
    int roll,found=0;
    printf("Enter roll number to update marks:");
    scanf("%d",&roll);
    for(int i=0;i<n;i++)
    {
        if(stu[i].roll==roll)
        {
            printf("Enter new marks for %s: ",stu[i].name);
            scanf("%f",&stu[i].marks);
            printf("Marks Updated succesfully\n");
            found=1;
            break;

        }
    }
    if(found==0)
        {
            printf("No student with roll number %d\n");
        }

  }
