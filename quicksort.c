/* 
IMPLEMENTATION OF QUICKSORT IN C
-RAMESHWAR BHASKARAN
*/
#include<stdio.h>
#include<stdlib.h>
/*void swap(int *a,int *b)
{
	int *temp;
	temp=a;
	a=b;
	b=temp;
}*/
int partition(int *a,int p,int n)
{
int pivot=a[p],i,j;
i=p;
int temp;
j=n;
while(i<j)
{
	while(a[i]<=pivot && i<=n)
		i++;
	while(a[j]>pivot && j>=0 )
		j--;
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
}
temp=a[p];
a[p]=a[j];
a[j]=temp;
return j;
}
void quicksort(int *a,int first,int last) // first is the index of the first element while last is the (index of the last element)
{
	if(first>=last)
		return;
int index=partition(a,first,last);
printf("index=%d\n",index);
	quicksort(a,first,index-1);
quicksort(a,index+1,last);
printf("\n\n The elements after sorting are\n");
int i;
for(i=first;i<=last;i++)
	printf("%d\n",a[i]);
}
int main()
{
	int n;
	printf("How many elements in the array?? ");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	int i;
	printf("\nEnter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
quicksort(a,0,n-1);

printf("\n\n The final elements after sorting are\n");
for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
	}