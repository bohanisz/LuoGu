#include <stdio.h>
int main()
{
	int n;
	int m;
	int t;
	scanf("%d %d ",&n,&m);
	int arr[1000]={0};
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&t);
		arr[t]++;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=arr[i];j++)
		{
			printf("%d ",i);
		}
	}
}
