//CODE IMPLEMENTING THE USE OF DOUBLE POINTERS TO DECLARE 2D ARRAYS...MALLOC USED TO DYNAMICALLY ALLOCATE MEMORY
#include<stdio.h>
#include<stdlib.h> //to include malloc function
int main()
{
int **p;
int rows1,cols1;
printf("enter the value of rows and cols");
scanf("%d %d",&rows1,&cols1);
p=(int **)malloc(rows1*sizeof(int *)); //dynamically allocates memory for 'rows1' number of pointers 

int i,j;

for(i=0;i<rows1;i++)
p[i]=(int *)malloc(cols1*sizeof(int)); // dynamically allocates memory for each pointer , memory worth cols1 integers 
printf("enter the values now!!\n");
for(i=0;i<rows1;i++)
{
for(j=0;j<cols1;j++)
{
scanf("%d",(*(p+i)+j));
// *(*(p+i)+j) same as p[i][j]
}
}
for(i=0;i<rows1;i++)
{
for(j=0;j<cols1;j++)
{
printf("%d ",*(*(p+i)+j) );
}
printf("\n");
}
return 0;
}
