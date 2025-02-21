#include<stdio.h>
int main() {
	char *months[]={"January","February","March","April","May","June","July","August","September","Octomber","November","December"};
	int month;
	printf("请输入您想要的月份！");
	scanf("%d",&month);
	printf("%s\n",months[month-1]); 
	
	
	return 0;
}
