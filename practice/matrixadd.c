#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5][5],b[5][5],c[5][5],i=0,j=0,m,n;
    printf("Enter the size of matrix m*n\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of first matrix:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",*(a+i)+j);
        }
    }
    printf("Enter the elements of second matrix:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",*(b+i)+j);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",*(*(c+i)+j));
        }
        printf("\n");
    }

}