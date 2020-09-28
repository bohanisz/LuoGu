#include <stdio.h>
int main(){
	int n;
	int a[100]={0};
	int i;
	int b[100]={0};
	int num=0;
	int j;
	int k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			for(k=1;k<=n;k++){
				if(i!=j&&k!=i&&k!=j&&a[i]+a[j]==a[k]&&b[k]==0){
					num++;
					b[k]=1;
				}
			}
		}
	}
	printf("%d",num);
	return 0;
} 
