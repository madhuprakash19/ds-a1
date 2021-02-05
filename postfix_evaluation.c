#include <math.h>
#include <stdio.h>
#include <ctype.h>
float stack[20];
int top = -1;
void push(float res)
{
  stack[++top] = res;
}
float pop()
{
  return (stack[top--]);
}
void main()
{
  char exp[20], ch;
  int i = 0;
  float op1, op2, r = 0;
  printf("Enter postfix expression to be evaluated:");
  scanf("%s", exp);
  while (exp[i] != '\0')
  {
    ch = exp[i];
    if (isdigit(ch))
      push(ch - '0');
    else
    {
      op1 = pop();
      op2 = pop();
      switch (ch)
      {
      case '+':
        r = op1 + op2;
        break;
      case '-':
        r = op2 - op1;
        break;
      case '*':
        r = op1 * op2;
        break;
      case '/':
        r = op2 / op1;
        break;
      case '$':
        r = pop(op2, op1);
        break;
      }
      push(r);
    }
    i++;
  }
  printf("Answer = %f\n", pop());
}
