//simple program to swap two numbers using pointers
//call by reference in fact
#include<stdio.h>
void swap(int *a,int *b)
{
/* //SWAP BUT DOES NOT REFLECT IN THE ACTUAL PARAMETERS
int *t;
*t=*a;
*a=*b;
*b=*t;
*/
//SWAP WITH CHANGES REFLECTED IN THE ACTUAL PARAMETERS
// The addresses are swapped
int t;
t=*a;
*a=*b;
*b=t;
}
int main()
{
int x,y;
printf("enter the values of x and y");
scanf("%d %d",&x,&y);
swap(&x,&y);
printf("\nThe values of x and y are %d and %d\n",x,y);
return 0;
}
