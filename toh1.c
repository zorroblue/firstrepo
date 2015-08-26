// repeat of towers of hanoi for practice
#include<stdio.h>
void towers_of_hanoi(int n,char start,char end,char aux)
{
if(n==1) //base condition
{printf("Move disc 1 from %c to %c\n",start,end);
return;
}
towers_of_hanoi(n-1,start,aux,end);
printf("Move disc %d from %c to %c\n",n,start,end);
towers_of_hanoi(n-1,aux,end,start);
}
int main()
{
int n;
printf("enter the number of discs ");
scanf("%d",&n);
towers_of_hanoi(n,'a','b','c');
return 0;
}
