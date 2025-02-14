#include<stdio.h>

int main()
{
	double a=0;
	double b=0;	 
	printf("请分别输入身高的英尺和英寸：");
	scanf("%lf %lf",&a,&b);
	printf("您的身高为%f\n",((a+b/12)*0.3048));	
	  
	
	return 0;
}
