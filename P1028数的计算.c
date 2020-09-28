#include <stdio.h>
int cnt(int n){
	int sum=1,i,a;
	for(i=1;i<=(n/2);i++){
		sum+=cnt(i);
	}
	return sum;
}
int main(){
	int n;
	int result;
	scanf("%d",&n);
	result=cnt(n);
	printf("%d",result);
	return 0;
}
