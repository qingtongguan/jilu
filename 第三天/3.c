#include<stdio.h>
int main() {
	
	int n;
	printf("������һ�����֣�\n");
	scanf("%d",&n);
	int m=1;
	do{
		m*=n;
		n-=1;
		
	}while(n!=0);
	printf("���Ϊ%d\n",m);
	
	return 0;
}
