//program using pointers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*typedef struct
{
int a;
char c;
}me;*/
int main()
{
char word[20],**w;
int n;
int i;
printf("enter the value of n\n");
scanf("%d",&n);
w=(char **)malloc(n*sizeof(char *));
for(i=0;i<n;i++)
{
scanf("%s",word);
w[i]=(char *)malloc((strlen(word)+1)*sizeof(char));
strcpy(w[i],word);
}
for(i=0;i<n;i++)
printf("%s\n",w[i]);
return 0;
}


