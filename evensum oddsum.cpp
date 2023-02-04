# include<stdio.h>
int main()
{ int i,n,evensum=0,odd=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(i%2==0)
	{
		evensum=evensum+i;
		
	}
	else
	{odd=odd+i;
	
	}}
	printf("%d\n",evensum);
	printf("%d",odd);
return 0;
}
