#include <stdio.h>

int main() 
{
	int price=0;
	int bill=0;
	printf("�������\n");
	scanf("%d",&price);
	printf("������Ʊ�档\n");
	scanf("%d",&bill);
	if(bill>=price) {
		printf("����%dԪ��\n",bill-price);
	} else{
		printf("����Ǯ������\n");
	}

	return 0;
}
