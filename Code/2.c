#include <stdio.h>
unsigned int stringlen(char *);
int main()
{
    char s[20];
    unsigned int n;
    printf("Enter a string to find its length\n");
    scanf("%s", s);
    n = stringlen(s);
    printf("The length of the string is = %u", n);
    return 0;
}
unsigned int stringlen(char *s)
{
    unsigned int len = 0;
    while (*(s + len) != '\0')
        len++;
    return len;
}

