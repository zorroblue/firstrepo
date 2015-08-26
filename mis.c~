#include<stdio.h>
int cofactormatrix[3][3];
float x[3][1];
int a[3][3];
int det(int a[3][3])
{
  int res=0;
  res=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[1][0]*(a[0][1]*a[2][2]-a[2][1]*a[0][2])+a[2][0]*(a[0][1]*a[1][2]-a[1][1]*a[0][2]);
  return res;
}
int transpose(int a[3][3],int i,int j)
{
    int temp;
    /*for(i=0;i<3;i++)
    {
      for(j=0;j<3 && i<=j;j++)
	{
	  temp=a[i][j];
	  a[i][j]=a[j][i];
	  a[j][i]=temp;
	}
	}*/
  return a[j][i];

}
void  cofactor(int a[3][3],int i,int j)
{
  cofactormatrix[i][j]=(a[(i-1+3)%3][(j+2+3)%3]*a[(i+1+3)%3][(j+1+3)%3]-a[(i-1+3)%3][(j+1+3)%3]*a[(i+1+3)%3][(j+2+3)%3]);
}
float multMatrix(float ar[3][3],int b[3][1],int i,int j)
{
  float res=0;
  int l=1;
//printf("\ndeta is %d\n\n",det(a));
  for(l=0;l<3;l++)
    res+=(ar[i][l]*b[l][0]);
printf("value of res now is %f\n",res);  return res;
}
int main()
{
  int b[3][1];

  a[0][0]=3;
  a[0][1]=2;
  a[0][2]=-5;
  a[1][0]=1;
  a[1][1]=-3;
  a[1][2]=2;
  a[2][0]=5;
  a[2][1]=-1;
  a[2][2]=4;
  b[0][0]=12;
  b[1][0]=-13;
  b[2][0]=10;
  int i,j;
  //printing the values of A and b
  printf("A is\n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
      printf("\n");
    }
  printf("\n \n B is\n");
for(i=0;i<3;i++)
    {
      for(j=0;j<1;j++)
	printf("%d ",b[i][j]);
      printf("\n");
    }

float inverse[3][3];
 printf("\n \n The inverse is \n \n");
 float d=det(a);
 //printf("%f\n \n",d);
 //printf("%d\n",cofactormatrix[2][2]);
 for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
       {
         cofactor(a,i,j);
	
       }
     
   }
 printf("inverse is\n\n");
 for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
{
inverse[i][j]=(float)transpose(cofactormatrix,i,j)/d;
         printf("%f ",transpose(cofactormatrix,i,j)/d);
       //  printf("%d ",cofactormatrix[i][j]);
}     
printf("\n");
   }
 int k;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%f ",inverse[i][j]);
printf("\n");
}
 // compute X
 for(i=0;i<3;i++)
   {
     for(k=0;k<1;k++)
       {
	
	     x[i][k]=multMatrix(inverse,b,i,k);
	   
       }
   }
 printf("X is \n");
 for(i=0;i<3;i++)
   {
     printf("%f\n",x[i][0]);
   }
 return 0;
	 }
