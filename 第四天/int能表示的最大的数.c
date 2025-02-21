#include<stdio.h>
int main() {
	unsigned int a=0;
	do{
		a++;
		if(a==0) {
			printf("%u\n",--a);
			break;
		} 
	}while(1);
	int b=0;
	do{
		b++;
		if(b<0) {
			printf("%d\n",--b);
			break;
		} 
	}while(1);
	
	
	
	return 0;
}
