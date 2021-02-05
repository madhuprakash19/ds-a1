#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

float stack[20];
int top = -1;

push(float res)
{
    stack[++top] = res;
}
pop()
{
    return (stack[top--]);
}

int main()
{
    char exp[20],ch;
    float r=0,op1,op2,ans;
    int i=0;
    printf("Enter postfix expression\n");
    scanf("%s",exp);
    while(exp[i]!='\0'){
        ch = exp[i];
        if(isdigit(ch)){
            push(ch - '0');
        }
        else{
            op1 = pop();
                op2 = pop();
            switch(ch){
                

                case '+':
                r = op2 + op1;
                break;

                case '-':
                r = op2 - op1;
                break;

                case '*':
                r = op2 * op1;
                break;

                case '/':
                r = op2 / op1;
                break;
            }
            push(r);
        }
        i++;
    }
    ans = pop();
    printf("Ans is %f",ans);
    
}