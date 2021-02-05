#include<stdio.h>
#include<stdlib.h>

int compare(char *,char *);

int main()
{
    char a[10],b[10];
    printf("Enter string 1: ");
    scanf("%s",a);
    printf("Enter string 2: ");
    scanf("%s",b);
    int i = compare(a,b);
    if(i == -1){
        printf("Strings are not same");
    }
    else{
        printf("Strings are same");
    }
    return 0;
}

int compare(char *a,char *b)
{
    int len1=0,len2=0,i=0;
    while(*(a+len1)!='\0')
    len1++;
    while(*(b+len2)!='\0')
    len2++;
    if(len1 == len2){
        while(i<len1){
            if(*(a+i)!= *(b+i))
            return -1;
            i++;
        }
    }
    else{
        return -1;
    }
    return 0;
}