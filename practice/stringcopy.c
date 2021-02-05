#include<stdio.h>
#include<stdlib.h>

string(char *,char *);

main()
{
    char a[20],b[20];
    printf("Enter a string\n");
    scanf("%s",a);
    string(a,b);
    printf("String is now copied from a to b %s\n",b);

}

string(char *a,char *b)
{
    int i=0;
    while(*(a+i)!= '\0'){
    *(b+i)=*(a+i);
    i++;
    }
    *(b+i)='\0';
}