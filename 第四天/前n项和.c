#include<stdio.h>
int main() {
	int N;
	printf("����������Ҫ��ӵ�����!\n");
	scanf("%d",&N);
	int n=1;
	double a=2;
	double b=1;
	double sum=a/b;
	double t;
	do{
		t=a;
		a=a+b;
		b=t;
		sum+=a/b;
		n++;
		
		
	}while(n<N);
	
	printf("%.2f\n",sum); 
		
	
	
	
	return 0;
}
