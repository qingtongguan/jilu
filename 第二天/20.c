#include <stdio.h>

int main() 
{
	const double RATE=8.25;
	const int STANDARD=40;
	double pay=0.0;
	int hours=0;
	printf("���������Ĺ���Сʱ����\n");
	scanf("%d",&hours);
	if(hours>STANDARD)
		pay=RATE*STANDARD+(hours-STANDARD)*RATE*1.5;
	else
		pay=RATE*hours;
	printf("Ӧ�����ʣ�%f��Ԫ����\n",pay);
	
	return 0;
} 
