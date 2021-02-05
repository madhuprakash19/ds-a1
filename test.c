#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<stdbool.h>
#include<string.h>
#define size 20 
int topN=-1,topC=-1;
struct node
{
char value;
struct node *left, *right;
};
struct node *stackN[size];
char stackC[size];
struct node *newNode(char v)
{
struct node *temp =(struct node*)malloc(sizeof(struct node));
temp->left = temp->right = NULL;
temp->value = v;
return temp;
}
void pushN(struct node *Node)
{
if(topN+1>=size)
printf("Stack is full\n");
topN++;
stackN[topN]=Node;
}
struct node *popN()
{
struct node *Node;
if(topN==-1)printf("stack is empty..\n");
Node =stackN[topN];
topN--;
return(Node);
}
void pushC(char c)
{
if(topC==size-1)
printf("Stack is full");
topC++;
stackC[topC]=c;
}
char popC()
{
if(topC==-1)
printf("Stack is empty");
char ele=stackC[topC];
topC--;
return ele;
}
int empty()
{
if(topC==-1)
return 1;
else
return 0;}
char peekC()
{
return stackC[topC];
}
struct node *peekN()
{
return stackN[topN];
}
struct node *build(char s[])
{
struct node *t, *t1, *t2;
int p[123] = { 0 };
p['+'] = p['-'] = 1, p['/'] = p['*'] = 2, p['^'] = 3,
p[')'] = 0;
for (int i = 0; i < strlen(s); i++)
{
if (s[i] == '(') {
pushC(s[i]);
}
else if (isalpha(s[i]))
{
t = newNode(s[i]);
pushN(t);
}else if (p[s[i]] > 0)
{
while (
!empty() && peekC() != '('
&& ((s[i] != '^' && p[peekC()] >= p[s[i]])
|| (s[i] == '^'
&& p[peekC()] > p[s[i]])))
{
t = newNode(peekC());
popC();
t1 = peekN();
popN();
t2 = peekN();
popN();
t->left = t2;
t->right = t1;
pushN(t);
}
pushC(s[i]);
}
else if (s[i] == ')') {
while (!empty() && peekC() != '(')
{
t = newNode(peekC());
popC();
t1 = peekN();popN();
t2 = peekN();
popN();
t->left = t2;
t->right = t1;
pushN(t);
}
popC();
}
}
t = peekN();
return t;
}
void postorder(struct node *root)
{
if (root)
{
postorder(root->left);
postorder(root->right);
printf("%c",root->value);
}
}
void preorder(struct node *root)
{
if(root)
{printf("%c",root->value);
preorder(root->left);
preorder(root->right);
}
}
int main()
{
char s[30];
printf("Enter an infix expression with opening and closing braces\n");
scanf("%s",s);
struct node *root = build(s);
printf("Postfix expression\n");
postorder(root);
printf("\nPrefix expression\n");
preorder(root);
return 0;
}