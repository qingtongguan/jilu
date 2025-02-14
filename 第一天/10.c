#include<stdio.h>

int main()
{
	int a=0;
	int b=0;
	printf("请输入两个数字:\n");
	scanf("%d %d",&a,&b);
	printf("%d和%d的平均数为%f",a,b,(a+b)/2.0);
	
	return 0;
} 
