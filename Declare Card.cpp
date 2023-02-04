#include<stdio.h>
int main()
{
	int i;
	int a[n];
	
	for(i=0;i<n;i++)
	
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>=40&&a[0]<=49)
	{
		printf("This is Visa Card");
	}
	else if(a[0]>=52&&a[0]<=55)
	{
		printf("This is Master Card");
		
	}
	else 
	{
		printf("This is Rupay Card");
	}
}
