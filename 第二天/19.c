#include <stdio.h>

int main() 
{
	int a,b;
	printf("����������������\n");
	scanf("%d %d",&a,&b);
	int max=b;
    if(a==b){
    	printf("������һ����\n");
	} else {
			if(a>b) {
		max=a;
	}
	printf("����Ǹ�����%d\n",max);
	}
	
	return 0;
}
