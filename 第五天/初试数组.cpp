#include<stdio.h>
int main() {
	
	int x;
	int cnt=0;
	double sum=0;
	int number[100];
	scanf("%d",&x);
	while(x!=-1) {
		number[cnt]=x;
		cnt++;
		sum+=x;
		scanf("%d",&x);
	}
	int i;
	for(i=0;i<cnt;i++) {
		if(number[i]<sum/cnt) {
			printf("%d ",number[i]);
		}
		
		
	}
	printf("所有数的平均数为%f\n",sum/cnt);
	
	
	return 0;
} 
