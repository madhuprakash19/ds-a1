#include<stdio.h>
#include<stdlib.h>

int top = -1;

struct Node{
    struct Node *next;
    int data;
};

struct Node *node;
struct Node *head;

struct Node *getnode()
{
    struct Node *temp=(struct node*)malloc(sizeof(struct Node *));
    return temp;
}

pop()
{
    struct Node *temp;
    if(head == NULL){
        printf("Stack is empty\n");
    }
    else{
    temp = head;
    head = head->next;
    free(temp);
    }
}

push()
{
    struct Node *p;
    int data;
    if(head==NULL){
        p = getnode();
        head = p;
        printf("Enter data: ");
        scanf("%d",&data);
        p->data = data;
        p->next = NULL;

    }
    else{
        p = getnode();
        p->next = head;
        printf("Enter data: ");
        scanf("%d",&data);
        p->data = data;
        head = p;
        

    }
}

display()
{
    struct Node *p;
    p = head;
    if(head == NULL){
        printf("Stack is empty\n");
    }
    else{
        printf("\n");
        while(p != NULL ){
            printf("%d\t",p->data);
            p = p->next;
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    do{
        printf("1.Push\n2.Pop.\n3.Display\n4.Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
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
            printf("Exiting.....\n");
            break;
        

        default:
        printf("Enter a valid choice\n");
        

        }
    }while(choice!=4);
}