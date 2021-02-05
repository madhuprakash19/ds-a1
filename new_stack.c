#include<stdio.h>
#define max_size 50
arrayelement(int arr[],int start ,int len);
int main()
{
    int arr[max_size];
    int i,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the elements in the array are:\n");
    arrayelement(arr,0,n);
    return 0;
}
arrayelement(int arr[],int start ,int len)
{
    if(start>=len)
    return;
    printf("%d",arr[start]);
    arrayelement(arr,start+1,len);
}
