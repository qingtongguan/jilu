#include<stdio.h>
int main() {
	
	int x;
	printf("������һ���������жϣ�\n");
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
		printf("%d��������\n",x);
	} else {
		printf("%d����������",x);
		printf("��������Ա�%d����\n",k);
	}

	return 0;
}       
