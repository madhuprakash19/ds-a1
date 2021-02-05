#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head;

struct node *getnode()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node *));
    return temp;
}

void insertion_beginning()
{
    struct node *ptr;
    int item;
    ptr = getnode();
    if(ptr == NULL){
        printf("\n OVERFLOW");
    }
    else{
        printf("\nEnter Item Value: ");
        scanf("%d",&item);
    

        if(head == NULL){
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        else{
            ptr->prev = NULL;
            ptr->next = head;
            ptr->data = item;
            head->prev = ptr;
            head = ptr;
        }
    }
}


void display()
{
    int i=1;
    struct node *dis;
    dis = head;
    if(head == NULL){
        printf("\nDouble Linked List is empty\n");
    }
    else{
        while(dis != NULL){
            printf("%d. %d\n",i,dis->data);
            i++;
            dis = dis->next;
        }
    }
}

void rev_display()
{
    int i=1;
    struct node *disr;
    disr = head;
    if(head == NULL){
        printf("\nDouble Linked List is empty\n");
    }
    else{
        while(1){
            // printf("%d.    %d\n",i,disr->data);
            
            if(disr->next == NULL){
                break;
            }
            else{
                disr = disr->next;
            }
            i++;
        }
        while(disr != NULL){
            printf("%d. %d\n",i,disr->data);
            i--;
            disr = disr->prev;
        }
    }
}

void insertion_last()
{
    struct node *ptr,*temp;
    int item;
    ptr = getnode();
    if(ptr == NULL){

        printf("\n OVERFLOW\n");
    }
    else{
        printf("\nEnter the value: ");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL){
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            ptr->next = NULL;
        }
    }
}

void insertion_specified()  
{
    struct node *ptr,*temp;
    int item,loc,i;
    ptr = getnode();
    if(ptr == NULL){
        printf("OVERFLOW\n");
    }
    else{
        temp = head;
        location:
        printf("\nEnter the location: \n");
        scanf("%d",&loc);
        for(i=1;i<loc-1;i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\nThere are less than %d elements",loc);
                goto location;
            }
        }
        printf("Enter the value: ");
        scanf("%d",&item);
        ptr->data = item;
        ptr->prev = temp;
        ptr->next = temp->next;
        temp->next->prev = ptr;
        temp->next = ptr;


    }
}

void deletion_beginning()
{
    struct node *ptr;
    ptr = head;
    if(head == NULL){
        printf("\nUNDERFLOW\n");
    }
    else{
        if(ptr->next == NULL){
            head = NULL;
            free(ptr);
            printf("Node Deleted\n");
        }
        else{
            head = head->next;
            head->prev = NULL;
            free(ptr);
            printf("Node deleted\n");
        }
    }
}

void deletion_last()  
{
    struct node *ptr;
    ptr = head;
    if(head == NULL){
        printf("\nUNDERFLOW\n");
    }
    else{
        if(ptr->next == NULL){
            head = NULL;
            free(ptr);
            printf("Node Deleted\n");
        }
        else{
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->prev->next = NULL;
            free(ptr);
            printf("\nNode deleted\n");
        }
    }
}

void deletion_specified()
{
    struct node *ptr,*temp;
    int val;
    printf("\nEnter the data after which node is to be deleted: ");
    scanf("%d",&val);
    ptr = head;
    while(ptr->data != val){
        ptr = ptr->next;
    }
    if(ptr->next == NULL){
        printf("\nThere is no next node to delete\n");
    }
    else{
        if(ptr->next->next == NULL){
            free(ptr->next);
            ptr->next = NULL;
            printf("\nNode after the element %d deleted",val);
        }
        else{
            temp = ptr->next;
            ptr->next = temp->next;
            temp->next->prev = ptr;
            free(temp);
            printf("\nNode after the element %d deleted",val);
        }
    }
}

void search()
{
    struct node *ptr;
    int i=1,flag = 0,item;
    ptr = head;
    if(ptr == NULL){
        printf("\nDouble linkedlist is empty\n");
    }
    else{
        printf("\nEnter the element tp be searched: ");
        scanf("%d",&item);
        while(ptr != NULL){
            if(ptr->data == item){
                printf("\nElement %d found at location %d",item,i);
                flag=1;
            }
            ptr = ptr->next;
            i++;
        }
        if(flag == 0){
            printf("\nElement not found\n");
        }
        else{
            printf("\n");
        }
    }
}

void main ()  
{  
int choice =0;  
    while(choice != 10)  
    {  
        printf("\n****Main Menu****\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Reverse diaplay\n10.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insertion_beginning();  
            break;  
            case 2:  
            insertion_last();  
            break;  
            case 3:  
            insertion_specified();  
            break;  
            case 4:  
            deletion_beginning();  
            break;  
            case 5:  
            deletion_last();  
            break;  
            case 6:  
            deletion_specified();  
            break;  
            case 7:  
            search();  
            break;  
            case 8:  
            display();  
            break;  
            case 9:  
            rev_display();
            break;
            case 10:
            exit(0);
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  
