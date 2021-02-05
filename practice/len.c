#include<stdio.h>
#include<stdlib.h>

int length(char *);

int main()
{
    char a[20];
    printf("Enter a string\n");
    scanf("%s",a);
    int len = length(a);
    printf("Length of string is %d\n",len);
    return 0;
}

int length(char *a)
{
    int i=0;
    while(*(a+i)!='\0'){
        i++;
    }
    return i;
}