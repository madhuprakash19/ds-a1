#include<stdio.h>
#include<stdlib.h>

struct tree{
    int info;
    struct tree *right;
    struct tree *left;
};

struct tree *maketree()
{
    int i;
    struct tree *p;
    printf("Enter data or -1 for NULL");
    scanf("%d",&i);
    if(i == -1) return NULL;
    p = (struct tree *)malloc(sizeof(struct tree));
    p->info = i;
    printf("Enter left node of %d",i);
    p->left = maketree();
    printf("Enter right node of %d",i);
    p->right = maketree();
    return p;
}

inorder(struct tree *p)
{
    if(p!=NULL){
    inorder(p->left);
    printf("%d",p->info);
    inorder(p->right);
    }
}


preorder(struct tree *p)
{
    if(p!=NULL){
    printf("%d",p->info);
    preorder(p->left);
    preorder(p->right);
    }
}


postorder(struct tree *p)
{
    if(p!=NULL){
    postorder(p->left);
    postorder(p->right);
    printf("%d",p->info);
    }
}
int main()
{
    struct tree *root;
    root = maketree();
    printf("Inorded: ");
    inorder(root);
    printf("Post order");
    postorder(root);
    printf("Preopdre: ");
    preorder(root);
    return 0;
}