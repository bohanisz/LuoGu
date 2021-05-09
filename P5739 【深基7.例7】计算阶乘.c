#include <stdio.h>
long fact(int n)
{
	int i;
	long result = 1;
	if (n<0)
	{
		return -1;
	}else if(n==1)
	{
		return result;
	}else
	{
		result=n*fact(n-1);
	}
	
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
}
