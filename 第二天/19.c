#include <stdio.h>

int main() 
{
	int a,b;
	printf("请输入两个整数。\n");
	scanf("%d %d",&a,&b);
	int max=b;
    if(a==b){
    	printf("两个数一样大。\n");
	} else {
			if(a>b) {
		max=a;
	}
	printf("大的那个数是%d\n",max);
	}
	
	return 0;
}
