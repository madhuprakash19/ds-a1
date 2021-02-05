#include<stdio.h>
#include<stdlib.h>

struct employee
{
    int id;
    char name[20];
    int sallary;
};


int main()
{
     int m,i=0;
    struct employee *emp;
    printf("Enter the number of employee: ");
   
    scanf("%d",&m);
    emp = (struct employee *)malloc(m*sizeof(struct employee));
    for(i=0;i<m;i++){
        printf("Enter employee name: ");
        scanf("%s",&(emp+i)->name);
        (emp+i)->id = i+1;
        printf("Enter employee slarry: ");
        scanf("%d",&(emp+i)->sallary);
    }

    for(i=0;i<m;i++){
        printf("Employee name: %s\n",(emp+i)->name);
        printf("Employee id: %d\n",(emp+i)->id);
        printf("Employee slarry: %d\n",(emp+i)->sallary);
        printf("\n\n");
    }

}