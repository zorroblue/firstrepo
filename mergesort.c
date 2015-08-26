/*
IMPLEMENTATION OF MERGESORT IN C
-RAMESHWAR BHASKARAN
*/
#include<stdio.h>
#include<stdlib.h>
void merge(int *a,int *b,int *c,int m,int n)
{
int i=0,j=0,k=0;
while(i<m&&j<n)
{
	if(a[i]<b[j])
		c[k++]=a[i++];
	else
		c[k++]=b[j++];
}
while(i<m)
c[k++]=a[i++];
while(j<n)
c[k++]=b[j++];
}
void mergesort(int *a,int n)  // x is the index of the first element ,n denotes the length of the array
{

if(n<=1)
	return ;
int i=n/2,k;
int *b=(int *)malloc(n*sizeof(n));
mergesort(a,i);
mergesort(a+i,n-i);
merge(a,a+i,b,i,n-i);
for(k=0;k<n;k++)
a[k]=b[k];
free(b);
}
int main()
{
	int i,n;
	printf("enter the number of elements in the array");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	printf("enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	mergesort(a,n);
	printf("\nThe elements after sorting are\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
