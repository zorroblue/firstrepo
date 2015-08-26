//MATRIX MULTIPLICATION USING POINTERS
//AND MALLOC ;)

#include<stdio.h>
#include<stdlib.h>
int main()
{
int **a,**b;
int rowsa,rowsb,colsa,colsb;
printf("enter the values of rows and cols for a and b ");
scanf("%d %d %d %d",&rowsa,&colsa,&rowsb,&colsb);

if(colsa!=rowsb)
return -1;

a=(int **)malloc(rowsa*sizeof(int *));
b=(int **)malloc(rowsb*sizeof(int *));
int i,j;

for(i=0;i<rowsa;i++)
*(a+i)=(int *)malloc(colsa*sizeof(int));
for(i=0;i<rowsb;i++)
*(b+i)=(int *)malloc(colsb*sizeof(int));
//input a matrix
for(i=0;i<rowsa;i++)
{
for(j=0;j<colsa;j++)
scanf("%d",*(a+i)+j);
}
//input b matrix
for(i=0;i<rowsb;i++)
{
for(j=0;j<colsb;j++)
scanf("%d",*(b+i)+j);
}
int **c; //the output matrix
c=(int **)malloc(rowsa*sizeof(int *));
for(i=0;i<rowsa;i++)
*(c+i)=(int *)calloc(0,colsb*sizeof(int)); //calloc does the same work of malloc along with initialising the value with 0 ....lazy to include two more for loops :P
int k;
//matrix multiplication
for(i=0;i<rowsa;i++)
{
for(k=0;k<colsb;k++)
{
for(j=0;j<colsa;j++)
{
*(*(c+i)+k)+= (*(*(a+i)+j))*(*(*(b+j)+k));
}
}
}
//printing
for(i=0;i<rowsa;i++)
{
for(j=0;j<colsb;j++)
printf("%d ",*(*(c+i)+j));
printf("\n");
}
return 0;
}

