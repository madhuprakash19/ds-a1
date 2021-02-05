#include<stdio.h>
#include<stdlib.h>

struct employee{
char name[20];
int id;
char dept[20];
float sallary;
};
void main()
{
    int m,i;
    struct employee *emp;
    printf("\nEnter the number of employees:");
    scanf("%d",&m);
    emp=(struct employee *)malloc(m*sizeof(struct employee));
    for(i=0;i<m;i++)
    {
        printf("\nEnter the details of Employee %d\n",i+1);
        printf("Enter the Employee name:");
        scanf("%s",&(emp+i)->name);
        printf("Enter Employee ID:");
        scanf("%d",&(emp+i)->id);
        printf("Enter the Employee department:");
        scanf("%s",&(emp+i)->dept);
        printf("Enter the sallary of employee:");
        scanf("%f",&(emp+i)->sallary);
    }
    printf("The employee details are as follows\n");
    for(i=0;i<m;i++)
    {

        printf("\nEmployee id: %d\n",(emp+i)->id);
        printf("Employee name:%s\n",(emp+i)->name);
        printf("Employee Department:%s\n",(emp+i)->dept);
        printf("Employee Sallary:%f\n",(emp+i)->sallary);
    }
}
