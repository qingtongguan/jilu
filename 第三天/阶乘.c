#include<stdio.h>
int main() {
	
	int i;
	printf("������һ�����֣�\n");
	scanf("%d",&i);
	int m=1;
	int n=1;
	for( m=i;m>1;m--) {
		n*=m;
	}
	printf("���Ϊ%d\n",n);
	
	return 0;
}                                                                                                                                                                                                                                                                                 
