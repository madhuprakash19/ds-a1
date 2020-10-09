#include<stdio.h>
void strcpy (char *, char*);
int main()
{
    char s1[20],s2[20];
    printf("Enter string s1\n");
    scanf("%s",s1);
    strcpy(s2,s1);
    printf("The string s1 is now copied to string s2 = %s",s2);
    return 0;

}
void strcpy (char *ds,char *ss)
{
    int i=0;
    while(*(ss+i)!='\0')
    {
        *(ds+i)=*(ss+i);
        i++;
    }
    *(ds+i)='\0';
}

