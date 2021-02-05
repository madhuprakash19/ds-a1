#include <stdio.h>
void parray(int arr[],int start, int len);

int main()
{
    int arr[20], n, i;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Elements in array are as follows:\n");
    parray(arr, 0, n);
    return 0;
}

void parray(int arr[], int start, int len)
{

    if (start >= len)
        return;

    printf("%d\t", arr[start]);

    parray(arr, start + 1, len);
}
