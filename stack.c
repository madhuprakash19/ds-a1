#include<stdio.h>
int stack[100];
int choice, top, n, i, x;
void push();
void pop();
void display();

int main(){
    top = -1;
    printf("Enter the size of the stack MAX is 100\n");
    scanf("%d", &n);
    printf("Enter your choice\n");
    printf("1. Push\n2.Pop\n3.display the stack\n4.Exit");
    do{
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                printf("Exiting the process\n\n");
                break;
            }
            default:{
                printf("Please enter the valid choice\n\n");
            }
        }
    }while(choice!=4);
    return 0;
}

void push(){
    if(top >= n-1){
        printf("Stack is full\n");
    }
    else{
        printf("Enter the Element to be pushed\n");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop(){
    if(top<=-1){
        printf("Stack is empty\n");
    }
    else{
        printf("The popped element is %d", stack[top]);
        x = stack[top];
        top--;
    }
}
void display(){
    if(top > 0){
        printf("The elements of the stack from the top are\n");
        for(i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
        printf("Enter the next choice\n");
    }
    else{
        printf("The stack is empty\n");
        
        
    }
}
