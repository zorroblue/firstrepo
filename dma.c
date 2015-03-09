/* ********SAMPLE PROGRAM ILLUSTRATING DYNAMIC MEMORY ALLOCATION ***********

Created by :Rameshwar Bhaskaran
Date: 9th March 2015
*/

#include<stdio.h>
int main()
{
int n,*p;
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
int i;
for(i=0;i<n;i++)
scanf("%d",p+i);
for(i=0;i<n;i++)
printf("%d\n",*(p+i));
return 0;
}
