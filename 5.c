#include<stdio.h>

int main()
{
 	int AMOUNT=0;
 	printf("�������ܶ�(Ԫ):");
 	scanf("%d",&AMOUNT);
	int price=0;
	printf("�������Ԫ��:");
	scanf("%d",&price);
	
	int change=AMOUNT-price;
	printf("����%dԪ��\n",change); 
}
