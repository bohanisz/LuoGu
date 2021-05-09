#include <stdio.h>
int main()
{
	int n;
	int num=1;
	int i;
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		num += 1;
		num *= 2;
	}
	printf("%d",num);
}
