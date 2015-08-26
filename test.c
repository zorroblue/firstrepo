#include<stdio.h>
int main()
{
int a;
a=3;
int *p;
p=(int *)124533;
//printf("%d is stored in %d",a,&a);
printf("%d",*p);
return 0;
}

