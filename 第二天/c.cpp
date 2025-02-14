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
		printf("猜数字!请输入您猜的数字！\n");
		scanf("%d",&a);
		n++;
		if(a<x) {
			printf("猜小了qwq");
		}else if(a>x) {
			printf("猜大了"); 
		} 
		
		
		
	}while(a!=x);
	printf("恭喜您猜对了！您一共猜了%d次\n",n);
	
	
return 0;
		
	
}
