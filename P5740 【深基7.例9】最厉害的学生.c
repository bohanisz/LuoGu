#include <stdio.h>
int main ()
{
	struct ranks
	{
		char name[20];
		int a;
		int b;
		int c;
		int d;
	} ;
	int n;
	scanf("%d",&n);
	struct ranks stu[n];
	for (int i=0;i<n; i++)
	{
		scanf("%s %d %d %d",&stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c); 
		stu[i].d=stu[i].a + stu[i].b + stu[i].c;
	}
	int k=0;
	for (int i=0;i<n;i++)
	{
		if(stu[i].d > stu[k].d)
		{
			k=i;
		}
	}
	printf("%s %d %d %d",stu[k].name,stu[k].a,stu[k].b,stu[k].c);
}
