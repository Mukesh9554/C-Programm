#include <stdio.h>
int main()
{
   int r,c,m,i,j,k;
   printf("enter no. of rows");
   scanf("%d",&r);
    printf("enter no. of columns");
   scanf("%d",&c);
   int a[r][c],b[r][c],mul[r][c];
   for (i=0;i<r;i++)
   {
    for (j=0;j<c;j++)
    scanf("%d",&a[i][j]);
   }
   
    for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    scanf("%d",&b[i][j]);
   }

     for (i=0;i<r;i++)
   {
    for (j=0;j<c;j++)
   {
printf("%d",a[i][j]);
}
   printf("\n");
}
    for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
  {
  printf("%d",b[i][j]);;
   }
   printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{    mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
}

}
}
for(i=0;i<r;i++)
{
for(j=0;j<r;j++)
{
printf("  %d",mul[i][j]);
}
printf(" \n");


}
}
