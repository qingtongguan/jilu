#include <stdio.h>


int main() 
{	
	int number=0;
	int a;
	printf("ÇëÊäÈëÊı×Ö\n");
	scanf("%d",&number);
	int ret=0;
	do{
		a=number%10;
		ret=ret*10+a;
		number/=10;
		
	}while(number!=0);
	printf("%d\n",ret);
	
	
	
return 0;
		
	
}
