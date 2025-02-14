#include <stdio.h>

int main() 
{
	const double RATE=8.25;
	const int STANDARD=40;
	double pay=0.0;
	int hours=0;
	printf("请输入您的工作小时数。\n");
	scanf("%d",&hours);
	if(hours>STANDARD)
		pay=RATE*STANDARD+(hours-STANDARD)*RATE*1.5;
	else
		pay=RATE*hours;
	printf("应付工资：%f（元）。\n",pay);
	
	return 0;
} 
