#include<stdio.h>
struct complex
{
int x,y;
//char sec;
};
void add()
{
struct complex a,b;
printf("enter the values of a and b");
scanf("%d+%di",&a.x,&a.y);
scanf("%d+%di",&b.x,&b.y);
printf("sum is %d+%di",a.x+b.x,a.y+b.y);
}
int main()
{
add();

return 0;
}
