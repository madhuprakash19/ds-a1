#include<stdio.h>
int queue[10],n=10,a,front=-1,i,rear=-1;
void pop(void);
void push(void);
void display(void);

int main()
{
    printf("Enter yor choice to perform stack operation\n");
    do{
        printf("\n1.Pop 2.Push 3.Display 4.Exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        {
        pop();
        break;
        }
        case 2:
        {
        push();
        break;
        }

        case 3:
        {
        display();
        break;
        }

        case 4:
        {
        printf("Exited from queue operation");
        break;
        }

        default:
        {
        printf("Enter a valid choice\n");
        break;
        }
        }
    }while(a!=4);
}

void pop()
{
    if(front==-1 || front>rear)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Element deleted %d\n",queue[front]);
        front+=1;
    }
    
}
void push()
{
    if(rear==n-1)
    {
        printf("Overflow\n");
    }
    else
    {
        if(front==-1)front++;
        rear++;
        scanf("%d",&queue[rear]);
    }
}
void display()
{
    if(front==-1 || front>rear)
    {
        printf("There r no elements \n");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
    }
    
}