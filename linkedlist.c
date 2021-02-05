#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
};

struct node *list;

struct node *getnode()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node *));
    return temp;
}
void insertatstart();
void display();
void deleteatstart();
void insertatend();
void deleteatend();
void insertafter();
void insertat();
void deleteafter();
void search();



void insertatstart()
{
    int ele;

    struct node *p = getnode();
    if(p == NULL){
        printf("Insert not possible\n");
    }
    else{
        printf("Enter the elemented to be insterted\n");
        scanf("%d",&ele);
        p->info=ele;
        if(list == NULL){
            list = p;
            p->next = NULL;
        }
        else{
            p->next = list;
            list = p;
        }
    }
}


void display()
{
    struct node *move;
    move = list;
    if(list == NULL){
        printf("List is empty\n");
    }
    else{
        while(move != NULL){
            printf("%d\t",move->info);
            move = move->next;
        }
        printf("\n");
    }
}


void deleteatstart()
{
    struct node *temp;
    if(list == NULL){
        printf("List is empty\n");
    }
    else{
        temp = list;
        list = temp->next;
        printf("Element deleted :%d\n",temp->info);
        free(temp);
    }
}


void insertatend()
{
    int ele;
    struct node *temp;
    struct node *p = getnode();
    if(p == NULL){
        printf("Insert not possible");
    }
    else{
        printf("Enter the element\n");
        scanf("%d",&ele);
        p->info = ele;
        p->next = NULL;
        if(list == NULL){
            list=p;
        }
        else{
            temp = list;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = p;
        }

    }
}


void deleteatend()
{
    int flag=0;
    struct node *prev,*p;
    if(list == NULL){
        printf("List is empty\n");
    }
    else{
        p = list;
        while(p->next != NULL){
            prev = p;
            p = p->next;
            flag=1;
        }
        
        if(flag==1){
        prev->next = NULL;
        }
        else{
            list=NULL;
        }
        free(p);
    }
}

void insertafter()
{
    struct node *p = getnode(),*temp;
    int ele,i,pos,flag=1;
    printf("Enter the element to be insterted\n");
    scanf("%d",&ele);
    p->info = ele;
    printf("Enter the position after the element to be inserted\n");
    scanf("%d",&pos);
    temp = list;
    for(i=1;i<pos;i++){
        temp = temp->next;
        if(temp==NULL){
            printf("insertion is not possible\n");
            flag = 0;
        }
    }
    if(flag==1){
        p->next = temp->next;
        temp->next = p;
    }

}


void insertat()
{
    struct node *p = getnode(),*temp;
    int ele,i,pos,flag=1;
    printf("Enter the element to be insterted\n");
    scanf("%d",&ele);
    p->info = ele;
    printf("Enter the position the element to be inserted\n");
    scanf("%d",&pos);
    temp = list;
    for(i=2;i<pos;i++){
        temp = temp->next;
        if(temp==NULL){
            printf("insertion is not possible\n");
            flag = 0;
        }
    }
    if(flag==1){
        p->next = temp->next;
        temp->next = p;
    }
}


void deleteafter()
{
    int i,pos;
    struct node *p,*prev;
    p = list;
    if(list==NULL)
    {
        printf("List is empty\n");
    }
    else{
        printf("Enter the position after to be deleted\n");
        scanf("%d",&pos);
        for(i=1;i<pos;i++){
            prev = p;
            p = p->next;
        }
        prev->next = p->next;
        free(p);
    }

}

void search()
{
    int ele,i=0;
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    struct node *p;
    p = list;
    while(p!=NULL){
        if(p->info==ele){
            printf("Element %d found at %d position\n",ele,i+1);
        }
        p=p->next;
        i++;
    }

}




int main()
{
    int choice;
    while(1)
    {
        printf("\nEnter your choice\n");
        printf("1. instert at start\n");
        printf("2. Display\n");
        printf("3. Delete at start\n");
        printf("4. Insert at end\n");
        printf("5. Delete at end\n");
        printf("6. Insert after\n");
        printf("7. Instert at position\n");
        printf("8. Delete after\n");
        printf("9. Search\n");
        printf("10. EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insertatstart();
            break;

            case 2:
            display();
            break;

            case 3:
            deleteatstart();
            break;

            case 4:
            insertatend();
            break;

            case 5:
            deleteatend();
            break;

            case 6:
            insertafter();
            break;

            case 7:
            insertat();
            break;

            case 8:
            deleteafter();
            break;

            case 9:
            search();
            break;

            case 10:
            exit(0);

            default:
            printf("Enter valid choice\n");
        }
    }
}