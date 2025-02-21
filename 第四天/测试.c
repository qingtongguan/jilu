#include<stdio.h>
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	int t;
	do{
		t=a%b;
		a=b;
		b=t;
	}while(b!=0);
	printf("%d",a);
	
	
	
	return 0;
}
