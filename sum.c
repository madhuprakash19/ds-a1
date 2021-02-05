#include<stdio.h>
#include<malloc.h>

main()
{
   int n,i;
   float sum=0,*p;
   printf("Enter the value of n\n");
   scanf("%d",&n);
   p = (float*)malloc(n*sizeof(float));
   if(p==NULL)
   {
       printf("Memory allocation failed");
       return;
   }
   printf("Enter %d numbers\n",n);
   for(i=0;i<n;i++)
   {
       scanf("%f",(p+i));
   }
   for(i=0;i<n;i++)
   {
       sum+=*(p+i);
   }
   printf("Sum is %f",sum);
}
