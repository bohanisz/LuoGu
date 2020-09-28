#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int i; 
	scanf("%d",&n);
	int m=sqrt(n);
	for(i=2;i<=m;i++){
		if((n%i)==0){
			int r;
			r=n/i; 
			printf("%d",r);
		}
	}
}
