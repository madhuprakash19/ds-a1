#include<stdio.h>
#include<stdlib.h>

int reverse(char *);

int main()
{
    char a[20];
    printf("Enter a string\n");
    scanf("%s",a);
    reverse(a);
    printf("Reversed string is %s\n",a);
    return 0;
}

int reverse(char *a)
{
    int i=0,len;
    char temp;
    while(*(a+i)!='\0'){
        i++;
    }
    len = i;
    i = 0;
    while(i<len/2){
        temp = *(a+i);
        *(a+i) = *(a+len-1-i);
        *(a+len-1-i) = temp;
        i++;
    }
}