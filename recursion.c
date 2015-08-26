#include<stdio.h>
int fact(int a)
{
if(a==1)
return 1;
return a*fact(a-1);
}
int main()
{
int n;
printf("whose factorial do u want to find?? ");
scanf("%d",&n);
printf("Factorial is %d\n",fact(n));
return 0;
}
