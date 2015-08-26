#include<stdio.h>
#include<stdlib.h>
void merge(int *a, int *b,int *c,int m,int n)
{
int i=0,j=0,k=0;
while(i!=m && j!=n)
{
if(a[i]<=b[j])
{
c[k++]=a[i++];
}
else
c[k++]=b[j++];
}
while(i!=m)
{
c[k++]=a[i++];
}
while(j!=n)
{
c[k++]=b[j++];
}
}
void mergesort(int *a,int *b,int n)
{
if(n<=1)
return;

int i=n/2;
mergesort(a,b,i);
mergesort(a+i,b,n-i);
merge(a,a+i,b,i,n-i);
int j=0;
for(;j<n;j++)
{
a[j]=b[j];
}
}
int main()
{
int n,*a;
printf("how many elements do u wish to enter? ");
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*n);
int i,x;
for(i=0;i<n;i++)
{scanf("%d",&x);
a[i]=x;}
int *b=(int *)malloc(n*sizeof(int));
mergesort(a,b,n);
printf("\n the sorted array is\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
