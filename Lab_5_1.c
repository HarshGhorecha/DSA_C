//1. Create a structure Employee_Detail (Employee_id, Name, Designation, Salary). Write a program to read the detail from user and print it. [A]
#include <stdio.h>
struct Employee_detail
{
    int Employee_id;
    char Name[50];
    char Designation[50];
    float Salary;
};

void main()
{
    struct Employee_detail e1;

    printf("Enter The Employee_id Here: ");
    scanf("%d",&e1.Employee_id);
    printf("Enter The Employee_Name Here: ");
    scanf("%s",&e1.Name);
    printf("Enter The Designation Here: ");
    scanf("%s",&e1.Designation);
    printf("Enter The Employee_Salary Here: ");
    scanf("%f",&e1.Salary);

    //print details

    printf("Employee Details:- \n");
    printf("Employee id is:%d \n",e1.Employee_id);
    printf("Employee Name is: %s \n",e1.Name);
    printf("Employee's Designation is: %s \n",e1.Designation);
    printf("Employee's Salary is: %2f \n",e1.Salary);
}
