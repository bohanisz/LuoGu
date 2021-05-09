#include <stdio.h>
int main(){
	char ISBN[13],p;
	int a[10];
	//int num[10]; 
	int m=0;
	int i=0;
	int result=0;
	int r;
	scanf("%s",ISBN);
	for(i=0;i<13;i++){
		if(ISBN[i]>='0'&&ISBN[i]<='9'){
			a[m]=(int)(ISBN[i]-'0');//×¢ÒâÇ¿×ª 
			m++;
		}
	}
	
	for(i=0;i<9;i++){
		result+=a[i]*(i+1);
	}
	r=result%11;
	if(r==10){
		p='X';
	}
	if(ISBN[12]=='X'){
		a[9]=10;
	}
	
	if(r==a[9]){
		printf("Right");
	}else{
		if(r==10){
			ISBN[12]='X';
		}else{
			ISBN[12]=(char)(r+'0');
		}
		for(i=0;i<13;i++){
		  printf("%c",ISBN[i]);
		}
	}


	return 0;

} 
