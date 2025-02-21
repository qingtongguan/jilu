#include<stdio.h>
int main() {
	
	int x;
	printf("请输入一个数用于判断！\n");
	scanf("%d",&x);
	int i;
	int isoPrime=0;
	int k;
	for (i=2;i<x;i++) {
		if(x%i==0) {
			isoPrime=1;
			k=i;
			break;
		}
	} 
	if(isoPrime==0) {
		printf("%d是素数！\n",x);
	} else {
		printf("%d不是素数！",x);
		printf("这个数可以被%d整除\n",k);
	}

	return 0;
}       
