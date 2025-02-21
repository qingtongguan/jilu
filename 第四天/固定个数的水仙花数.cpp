#include<stdio.h>
int main() {
	int n;
	printf("你想要几位数的水仙花数？\n");
	scanf("%d",&n);
	int first=1;
	int i=1;
	while(i!=n){
		first*=10;
		i++;
	}
	int a=first;
	while(a<first*10) {
		int t;
		int sum; 
		t=a;
		do{
			int b;
			b=t%10;
			t/=10;
			int j=0;
			int p=1;
			while(j<n){
				p*=b;
				j++;
			}
			sum+=p;
		}while(t>0);
		if(sum==a){
			printf("%d  ",sum);
		}
		sum=0;
		a++;
		
		
		
		
	}

		
	
	return 0;
}
