#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() 
{	
	int a=0;
	int n=0;
	srand(time(0));
	int x=rand();
	do{
		printf("������!���������µ����֣�\n");
		scanf("%d",&a);
		n++;
		if(a<x) {
			printf("��С��qwq");
		}else if(a>x) {
			printf("�´���"); 
		} 
		
		
		
	}while(a!=x);
	printf("��ϲ���¶��ˣ���һ������%d��\n",n);
	
	
return 0;
		
	
}
