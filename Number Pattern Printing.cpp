#include<stdio.h>
int main()
{
 int j,i,d,a=1;

 for(i=1;i<=10;i++)
 {d=a+47; 
for(j=1;j<=i;j++)
{ char ch =(char)d;

printf(" %c",ch);
d++;		
}
 printf("\n");
 }
  
}

