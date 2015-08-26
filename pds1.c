#include<stdio.h>
#include<stdlib.h>
int main()
{
int *a;
int n;
printf("enter the number of records to be entered");
scanf("%d",&n);
int i;
a=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
scanf("%d",a+i);
printf("\n%d\n",*(a+i));
}
return 0;
}
