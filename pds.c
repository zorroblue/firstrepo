#include<stdio.h>
#include<stdlib.h>
int main()
{
int **a;
int rows,cols;
printf("enter the rows and cols ");
scanf("%d %d",&rows,&cols);
a=(int **)malloc(rows*sizeof(int *));
int i;
for(i=0;i<rows;i++)
{
*(a+i)=(int *)malloc(cols*sizeof(int));
}
int j;

for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
*(*(a+i)+j)=i+j;
printf("a[%d][%d]=%d\n",i,j,*(*(a+i)+j));
}
}
return 0;
}


