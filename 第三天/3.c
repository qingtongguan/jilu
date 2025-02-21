#include<stdio.h>
int main() {
	
	int n;
	printf("请输入一个数字！\n");
	scanf("%d",&n);
	int m=1;
	do{
		m*=n;
		n-=1;
		
	}while(n!=0);
	printf("结果为%d\n",m);
	
	return 0;
}
