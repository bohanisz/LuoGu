#include <stdio.h>
int main(){
	int i;
	int sum=0;
	int L;
	int n;
	int num=0;
	scanf("%d",&L);
	if(L==1){
		printf("0");
	}else{
		for(n=2;sum<L;n++){
			int X=1;
			for(i=2;i<n;i++){
				if(n%i==0){
					X=0;
					break; 
				}
			}
			if(X==1){
				if(sum+n>L){
					break;
				}
				printf("%d\n",n);
				num++;
				sum+=n;
			}
		}
		printf("%d",num);
	}
	
}

