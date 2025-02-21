#include<stdio.h>
int main() {
	
	int b,c;
	scanf("%d:%d",&b,&c);
	printf("b=%d,c=%d\n",b,c);
	int iso=0;
	if(b>12&&b<24) {
		b-=12;
		iso=1;
	} else if(b>=24) {
		b-=24;
	} else  if(b==12) {
		iso=1;
	}
		printf("b=%d,c=%d\n",b,c);
	if(iso==0) {
		printf("%d:%d AM\n",b,c);
	} else {
		printf("%d:%d PM\n",b,c);
	}
	
	return 0;
}
