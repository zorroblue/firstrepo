/* 
Program to test malloc for structure type variables

Created by : Rameshwar Bhaskaran
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct car
{
int speed;
char model;
}*p;
int main()
{
int n;
printf("How many records do you wish to enter?\n");
scanf("%d",&n);
p=(car *)malloc(n*sizeof(car));

printf("Enter the values of the records\n");
int i;
int max=-1;
for(i=0;i<n;i++)
{
printf("enter the speed and model\n");
scanf("%d %c",&((p+i)->speed),&((p+i)->model));
if((*(p+i)).speed>max)
max=(*(p+i)).speed;
}
printf("\n \n The maximum value of speed is %d\n",max);
free(p);
return 0;
}
