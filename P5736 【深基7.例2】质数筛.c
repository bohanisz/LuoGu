#include <stdio.h>
#include <math.h>
void prime(int n)
{
	int m=sqrt(n);
	 
	if(n==2)
	{
		printf("%d ",n);
	}else if(n>2)
	{
		int X=1;
			for(int i=2;i<=m;i++)
		{
			
			if(n%i==0)
			{
				X=0;
				break;
			}
		}
		if(X==1)
		{
			printf("%d ",n);
		}	
		
		
	}
}
int main()
{
	int arr[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		
		prime(arr[i]);
		
	}
} 
