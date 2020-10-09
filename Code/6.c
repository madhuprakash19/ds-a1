#include<stdio.h>
void strrev(char *);
int main()
{
    char s1[10];
    printf("Enter a string to reverse it\n");
    scanf("%s",s1);
    strrev(s1);
    printf("%s\n",s1);
    return 0;
}
void strrev(char *s)
{
    int len=0,i;
    char temp;
    while(*(s+len)!='\0')
        len++;
    for(i=0;i<len/2;i++)
    {
        temp=*(s+i);
        *(s+i)=*(s+len-1-i);
        *(s+len-1-i)=temp;
    }
}

