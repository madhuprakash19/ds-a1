#include <stdio.h>
void strcat(char *, char *);
int main()
{
    char s1[20], s2[20];
    printf("Enter string1\n");
    scanf("%s", s1);
    printf("Enter string2\n");
    scanf("%s", s2);
    strcat(s1, s2);
    printf("Concatenated string is as follows : ");
    printf("%s", s1);
    return 0;
}
void strcat(char *s1, char *s2)
{
    int pos = 0, i = 0;
    while (*(s1 + pos) != '\0')
        pos++;
    while (*(s2 + i) != '\0')
        *(s1 + pos++) = *(s2 + i++);
    *(s1 + pos) = '\0';
    return;
}

