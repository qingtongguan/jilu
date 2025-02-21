#include<stdio.h>
int main() {
	
	int i;
	printf("请输入一个数字！\n");
	scanf("%d",&i);
	int m=1;
	int n=1;
	for( m=i;m>1;m--) {
		n*=m;
	}
	printf("结果为%d\n",n);
	
	return 0;
}                                                                                                                                                                                                                                                                                 
