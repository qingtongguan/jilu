#include <stdio.h>

int main() 
{	
	int a=0;
	int n=0;
	scanf("%d",&a);
	do{
		n++;
		a/=10;
	} while(a>0);
	printf("���������Ϊ%dλ��\n",n);
	
return 0;
		
	
}
