#include<stdio.h>
int main() {
	
	int speed;
	scanf("%d",&speed);
	if(speed>60) {
		printf("speed: %d - Speeding\n",speed);
	} else {
		printf("speed: %d - OK\n",speed);
	}
	
	return 0;
}
