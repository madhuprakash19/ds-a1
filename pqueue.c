// this program implements the priority queue using the concept of linked list

#include<stdio.h>
#include<malloc.h>

struct Node{
    int info;
    int pri;
    struct Node *next;
};

struct Node *front = NULL;

/// first code for display and then delete
//after that code for insert because here we have the special insert

// point to be noted: i am printing the priority first and then the data
void display(){
    struct Node *ptr;
    ptr = front;
    if(front == NULL){
        printf("The Queue is empty\n");
    }
    else {
        while(ptr != NULL){
            printf("%d \t %d\n", ptr->pri, ptr->info);
            ptr = ptr->next;
        }
    }
}

void delete(){
    struct Node *temp;
    if(front == NULL){
        printf("The queue is empty\n");
    }
    else{
        temp = front;
        printf("The element deletes is %d\n", temp->info);
        front = front->next;
        free(temp);
    }
}

void insert(int element, int priority){
    struct Node *temp, *p;
    /// creating a node
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->info = element;
    temp->pri = priority;
    // case 1
    if(front == NULL || priority < front->pri){
        temp->next = front;
        front = temp;
        printf("The element %d is inserted\n", front->info);
    }
    //case 2
    else{
        p = front; // we are using the p for traversing
        while(p->next == NULL && p->next->pri <= priority)
            p = p->next;
        
        temp->next = p->next;
        p->next = temp;
    }
}

int main(){
    int choice, ele, prio;
    printf(">>>>>>>MENU<<<<<<<\n");
    printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
    while(choice != 4){
        printf("Enter the choice\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("Enter the element\n");
                    scanf("%d", &ele);
                    printf("Enter its priority(Where 1 being considered as lowest priority value)\n");
                    scanf("%d", &prio);
                    insert(ele, prio);
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default:printf("Please enter the valid choice\n");
        }
    }
    return 0;
}