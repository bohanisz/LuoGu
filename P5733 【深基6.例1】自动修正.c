#include <stdio.h>
int main(){
	char a[100]={0};
	int n;
	int i;
	scanf("%s",a);
	for(i=0;i<=100;i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
	} 
	
	
	printf("%s",a);
} 
