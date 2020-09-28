#include <stdio.h>
int main(){
	int n;
	int a[100]={0};
	int b[100]={0};
	int i;
	int j;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=2;i<=n;i++){
		for(j=1;j<i;j++){
			if(a[j]<a[i]){
				b[i]++;
			}
		}
	}
	for(i=1;i<=n;i++){
		printf("%d ",b[i]);
	}
} 
