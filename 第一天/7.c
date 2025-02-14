#include<stdio.h>

int main()
{
	int a=0;
	int b=0;	 
	printf("请分别输入身高的英寸和英寸：");
	scanf("%d %d",&a,&b);
	printf("您的身高为%f\n",((a+b/12.0)*0.3048));	
	  
	
	return 0;
}
