#include <stdio.h>
int main (){
	int sum=0;
	int n;
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("%d",sum);
} 
