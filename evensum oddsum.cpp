#include <stdio.h>
   int main()
{
	int i,n,f,Oddsum=0,Evensum=0;
	printf("Enter the Elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		f=a[i]%2;
		if(f==0){ Evensum=Evensum+a[i];}
		else{Oddsum=Oddsum+a[i];
		}
	}
			for(i=0;i<n;i++)
		{
			printf("printing %d\n",a[i]);
		}
			printf("Sum of Even Numers=%d\n",Evensum);
			printf("Sum of Odd Numers=%d",Oddsum);
return 0;
	}
	
	

