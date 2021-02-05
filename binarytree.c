#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *left;
    struct Node *right;
    int data;
};
struct Node *node;

struct Node *maketree(){
    struct Node *p;
    int info;
    printf("Enter the data or -1 for NULL\n");
    scanf("%d",&info);
    if(info == -1) return NULL ;
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = info;
    printf("Enter the left child of %d\n",info);
    p->left = maketree();
    printf("Enter the right child of %d\n",info);
    p->right = maketree();

    return p;
}

void preorder(struct Node *t)
{
    if(t!=NULL){
        printf("%d->",t->data);
        preorder(t->left);
        preorder(t->right);
    }

}

void postorder(struct Node *t)
{
    if(t!=NULL){
		postorder(t->left) ; 
		postorder(t->right) ;
		printf("%d->", t->data) ; 
		 
	}
}

void inorder(struct Node *t)
{
    if(t!=NULL){
		inorder(t->left) ; 
		printf("%d->", t->data) ;
		inorder(t->right) ;
	}
}

int main()
{
    struct Node *root;
    root = maketree();

    printf("\nPreorder: ");
    preorder(root);

    printf("\nPostorder: ");
    postorder(root);

    printf("\nInorder: ");
    inorder(root);

    return 0;

}