#include<stdio.h>
int main () {
	int a[]={12,45,48,1,5,43,4,-1};
	int *p;
	p=&a;
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++) {
		printf("%d\n",a[i]);
	}
	while(*p!=-1) {
		printf("%d\n",*p++);

	}
	
	
	return 0;
}
