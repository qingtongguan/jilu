#include<stdio.h>

int main()
{
	int result1;
	int result2;
	int result=2;
	result1=(result=result*2)*6*(result=3+result);
	result2=(result=result+3)*6*(result=result*2);
	printf("%d %d",result1,result2);
} 
