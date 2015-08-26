#include<stdio.h>

void print_subsets(int a[],int k,int j,int n)
{
//int j;
//if(k!=n+1)
{
int i;
printf("{");
for(i=0;i<k;i++)
printf("%d ",a[i]);
printf("}\n");
for(i=j+1;i<=n;i++)
{
a[k]=i;
print_subsets(a,k+1,i,n);
}
}
}
int main()
{
int n;
int a[20];
printf("enter n\n");
scanf("%d",&n);
print_subsets(a,0,0,n);
return 0;
}



