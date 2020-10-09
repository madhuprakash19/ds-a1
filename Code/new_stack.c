#include <stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main ()
{

    printf("Enter the number of elements in the stack ");
    scanf("%d",&n);


    while(choice != 4)
    {
        printf("\nEnter your choice\n1.Push\n2.Pop\n3.Show\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("Exiting....\n");
                break;
            }
            default:
            {
                printf("Please Enter a valid choice ");
            }
        }
    }
}

void push ()
{
    int val;
    if (top>=n-1 )
    printf("\nStack is Overflow\n");
    else
    {
        printf("\nEnter the value\n");
        scanf("%d",&val);
        top+=1;
        stack[top] = val;
    }
}

void pop ()
{
    if(top == -1)
    printf("\nUnderflow\n");
    else{
            printf("\nElement %d has been popped",stack[top]);
    top = top -1;
}
}
void show()
{
    printf("\nElements in stack are:\n");
    for (i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("\nStack is empty\n");
    }
}
