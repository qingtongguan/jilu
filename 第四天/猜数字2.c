#include<stdio.h>
int main() {
	int x;
	int a,b;
	printf("输入你要假装猜的数和最多猜的次数。\n");
	scanf("%d %d",&x,&b);
	int finish=0;
	int n=0;
	
	do{
		printf("输入一个你猜的数\n");
		scanf("%d",&a);
		n++;
		if(a<x) {
			printf("猜小了\n");
		} else if(a>x) {
			printf("猜大了\n");
		}
		else{
			if(n==1) {
				printf("Binge!\n");break;
			}
			else if(n<=3){
				printf("Lucky You!\n");break;
			} else if(n>3&&n<b) {
				printf("Good Guess!\n");break;
			}
		}
		if(n==b){
			printf("Game Over\n");
			finish=1;
		}
		
	}while(!finish);
	
	
		
	
	
	
	return 0;
}
