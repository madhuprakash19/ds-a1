#include<stdio.h>
#include<stdlib.h>

int a[10];
int top = -1,rear = -1;

push()
{
    if(top == 9){
        printf("Stack is full");
    }
    else{
            top++;
            printf("Enter element value: ");
            scanf("%d",&a[top]);
            printf("Element insterted\n");
    }
}
pop()
{
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        top--;
        printf("Element poped\n");
    }
}
display()
{
    int i = 0;
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }
    else{
        while(i<top+1){
            printf("%d",a[i]);
            i++;
        }
    }

}
// isempty();
// isfull();

int main()
{
    int c;
    do{
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&c);
        switch(c){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("Exiting....\n");
            break;

            default:
            printf("Enter correct choice\n");
            break;

    }}while(c != 4);
}