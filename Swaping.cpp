#include<stdio.h>


int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("After Swap X: %d\n",x);
	printf("After Swap Y: %d\n\n",y);
}
int main ()
{
	int a,b;
	printf("Enter The First Number:- ");
	scanf("%d",&a);
	printf("Enter The second Number:- ");
	scanf("%d",&b);
	printf("\nBefore Swap a: %d\n",a);
	printf("Before Swap b: %d\n\n",b);
	swap(a,b);
	printf("After Swap a: %d\n",a);
	printf("After Swap b: %d\n\n",b);
}
