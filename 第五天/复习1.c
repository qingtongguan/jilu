#include<stdio.h>
int main() {
	int n;
//	scanf("%d",&n);
	n=3;
	int first=1;
	int i=1;
	while(i<n){
		first*=10;
		i++;
	}
	int j=first;
	while(j<first*10) {
		
		int t=j;
		int sum=0;
		int a;
		while(t>0) {
			a=t%10;
			t/=10;
			int k=0;
			int c=1;
			while(k<n) {
				c*=a;
				k++;
			}
			sum+=c;
			
			
		}
			
		if(sum==j) {
			printf("%d ",sum);
		}
		
		
		
		
		
		
		
		
		sum=0;
		j++;
	}
	
	
	
	
	
	return 0;
}
