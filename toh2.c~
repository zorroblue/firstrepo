#include<stdio.h>
#include<string.h>
void swap(char a[],int i,int j)
{
char temp=a[i];
a[i]=a[j];
a[j]=temp;
}
void permute(char a[],int i,int n)
{
static int count=0;
int j;
if(i==n)
printf("\nString number %d : %s \n",++count,a);
else
{
for(j=i;j<n;j++)
{
swap(a,i,j);
permute(a,i+1,n);
swap(a,i,j);
}
}
}
int main()
{
char s[100];
printf("enter the string ");
scanf("%s",s);
permute(s,0,strlen(s));
return 0;
}
