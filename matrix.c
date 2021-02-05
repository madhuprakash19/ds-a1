#include<stdio.h>
#include<malloc.h>
main()
{
    int i,j,m,n,d1=0,d2=0,sum=0;
    int (*p)[3];

    printf("Enter square matrix size\n");
    scanf("%d",&m);
    n=m;

    p=(int*)malloc(m*n*sizeof(int));

    printf("\nEnter the matrix elements\n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }

    for(i=0;i<m;i++)
    {
        d1+=*(*(p+i)+i);
    }
    for(i=0,j=(n-1);i<m;i++,j--)
    {
        d2+=*(*(p+i)+j);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum+=*(*(p+i)+j);
        }
    }
    printf("The sum of diagonal elements are %d\n",d1);
    printf("The sum of secondary diagonal elements are %d\n",d2);
    printf("The sum of all elements are %d\n",sum);
}
