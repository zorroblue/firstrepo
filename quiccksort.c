#include<stdio.h>
#include<stdlib.h>
/*int partition(int *a,int front,int rear)
{
int pivot=a[front];
int i=front+1,j=rear;
int temp;
while(i<j)
{
while(a[i]<=pivot && i<rear)
i++;
while(a[j]>pivot && j>=front)
j--;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[front];
a[front]=a[j];
a[j]=temp;
return j;
}
void quicksort(int *a,int p,int r)
{
if(p>=r)
return ;
int pos=partition(a,p,r);
quicksort(a,p,pos);
quicksort(a,pos+1,r);
}
*/
int main()
{
int *a,n;
printf("how many elements? ");
scanf("%d",&n);
int i;
a=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//quicksort(a,0,n-1);
return 0;
}

