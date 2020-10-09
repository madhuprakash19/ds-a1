#include <stdio.h>
unsigned int strlen(char *);
#include <stdio.h>
int strcmp(char *, char *);
int main()
{
    char s1[20], s2[20];
    printf("Enter the string1\n");
    scanf("%s", s1);
    printf("Enter the string2\n");
    scanf("%s", s2);
    int n = strcmp(s1, s2);
    if (n == 0)
        printf("The entered strings %s and %s are equal", s1, s2);
    else
        printf("The entered strings %s and %s are not equal", s1, s2);
    return 0;
}
int strcmp(char *str1, char *str2)
{
    int len1 = 0, len2 = 0, i;
    while (*(str1 + len1) != '\0')
        len1++;
    while (*(str2 + len2) != '\0')
        len2++;
    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
            if (*(str1 + i) != *(str2 + i))
                return -1;
        return 0;
    }
    else
        return -1;
}
