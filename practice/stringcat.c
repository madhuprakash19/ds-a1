#include<stdio.h>
#include<stdlib.h>

cat(char *,char *);

int main()
{
    char a[20],b[20];
    printf("Enter string 1: ");
    scanf("%s",a);
    printf("Enter string 2: ");
    scanf("%s",b);
    cat(a,b);
    printf("Concatinated string is as follows %s\n",a);
    return 0;
}

cat(char *a,char *b)
{
    int i = 0,j = 0;
    while(*(a+i)!='\0')
    i++;
    while(*(b+j)!='\0'){
        *(a+i) = *(b+j);
        j++;
        i++;
    }
    *(a+i) = '\0';
}