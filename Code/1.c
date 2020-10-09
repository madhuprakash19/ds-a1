#include <stdio.h>
int main()
{
    int a[5][5], b[5][5], c[5][5];
    int i, j, m, n;
    printf("Enter the size of matrix m X n To perform addition operation\n");
    scanf("%d %d", &m, &n);
    printf("Enter elements of first matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", (*(a + i) + j));
        }
    }
    printf("Enter the elements of second matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", (*(b + i) + j));
        }
    }
    printf("Addition of matrix is as follows:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            *(*(c + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
            printf("%d\t", *(*(c + i) + j));
        }
        printf("\n");
    }
}
