#include<stdio.h>
int main() {
	int x;
	int a,b;
	printf("������Ҫ��װ�µ��������µĴ�����\n");
	scanf("%d %d",&x,&b);
	int finish=0;
	int n=0;
	
	do{
		printf("����һ����µ���\n");
		scanf("%d",&a);
		n++;
		if(a<x) {
			printf("��С��\n");
		} else if(a>x) {
			printf("�´���\n");
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
