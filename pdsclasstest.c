#include<stdio.h>
typedef struct
{
char *name;
int age;
}human;
void change(human a)
{
a.name[0]+='A'-'a';
a.age+=3;
}
int main()
{
char a[20]="computer";
human b={a,18};
change(b);
printf("%s %d\n",b.name,b.age);
return 0;
}