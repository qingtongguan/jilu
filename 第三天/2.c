#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {

	int number;
	int a;
	int n=0;
	int m=0;
	printf("���һ�����ְ�!\n");
	scanf("%d",&number);
	int k=number;
	do{
		number/=10;
		m++;
	}while(number>0);
	printf("����һ��%dλ�����䵹��Ϊ",m);
	int ret=0;
	number=k;
	do{
		a=number%10;
		ret=ret*10+a;
		number/=10;
		n++;
		printf("%d",a);
	}while(number>0);
	

	
	return 0;
} 
