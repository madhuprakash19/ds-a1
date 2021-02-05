#include<stdio.h>
#include<stdlib.h>
#define ss 3
int mstack[3],top=-1;
void push(int ele)
{
    if(top==ss-1)
    {
        printf("stack is full");
        return;
    }
    top++;
    mstack[top]=ele;
    printf("element pushed inside is %d\n",mstack[top]);
}
int pop()
{
    if(top==-1)
    {
        printf("stack is empty");
        return -1;
    }
    int ele=mstack[top];
    top--;
    printf("element popped is %d",ele);
}

void size()
{
    printf("size of stack is %d\n",top+1);
}

void display()
{
   int i;
   if(top==-1)
   {
       printf("stack is empty");
   }
   else
   {
   printf("elements are");
    for(i=0;i<top;i++)
    {
      printf("%d",mstack[i]);
    }
}
printf("\n");
}

void main()
{
    int choice,ele;
    printf("1.push\n2.pop\n3.size\n4.display\n5.exit\n");
    while(1)
    {
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter the element to push into the stack");
        scanf("%d",&ele);
        push(ele);
        break;

        case 2:
            pop();
            break;

            case 3:
                size();
                break;
                case 4:
                    display();
                    break;
                    case 5:
                        exit(0);


    }
}
}