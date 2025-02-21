#include<stdio.h>
#define number 100

int iso(int key, int b[],int length);
int main () {
	int count=1;
//	const int number=100;
	int a[number]={2};
	int x=3;
	while(count<number) {
		if(iso(x,a,count)) {
			a[count++]=x;
		}
		x++;
	}
	int k;
	for(k=0;k<number;k++) {
		printf("%d",a[k]);
		if((k+1)%5) {
			printf("\t");
		}else {
			printf("\n");
		}
	}

	
	return 0;
}
	int iso(int key, int b[],int length) {
		int ret=1;
		int i;
		for(i=0;i<length;i++) {
			if(key%b[i]==0) {
				ret=0;
				break;
			}
		}
		
		
		return ret;
	}
