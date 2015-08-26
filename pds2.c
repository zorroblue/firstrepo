#include<stdio.h>
int main()
{
char *a,*c;
char b[20]="computer";
a=b;
c=a;
a++;

printf("%c %s\n",*c,a);
return 0;
}
