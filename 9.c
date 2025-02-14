#include<stdio.h>

int main()
{
	int hour1,minute1,hour2,minute2;
	printf("请输入第一个时间的小时数和分钟数：\n");
	scanf("%d %d",&hour1,&minute1);
	printf("请输入第二个时间的小时数和分钟数：\n");
	scanf("%d %d",&hour2,&minute2);
	int M=60*hour1+minute1;
	int N=60*hour2+minute2;
	printf("两个时间的差为%d小时%d分钟",(M-N)/60,(M-N)%60);
	
	return 0;
}
