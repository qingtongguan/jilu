#include<stdio.h>

int main()
{
	int hour1,minute1,hour2,minute2;
	printf("�������һ��ʱ���Сʱ���ͷ�������\n");
	scanf("%d %d",&hour1,&minute1);
	printf("������ڶ���ʱ���Сʱ���ͷ�������\n");
	scanf("%d %d",&hour2,&minute2);
	int M=60*hour1+minute1;
	int N=60*hour2+minute2;
	printf("����ʱ��Ĳ�Ϊ%dСʱ%d����",(M-N)/60,(M-N)%60);
	
	return 0;
}
