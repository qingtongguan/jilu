#include<stdio.h>
void swap(int *pa,int *pb);
void f(int *p);
int main() {
	int a=5;
	int b=6;
	swap(&a,&b);
	printf("%d,%d\n",a,b);
	
	
	
	
	
	return 0;
}

void swap(int *pa,int *pb) {
	int t=*pa;
	*pa=*pb;
	*pb=t;
}                                         
