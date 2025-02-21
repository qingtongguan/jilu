#include<stdio.h>
int main() {
	int i=1;
	int j=1;
	int k=1;
	for(i=1;i<=k;i++) {
		for(j=1;j<=i;j++) {
				printf("%d*%d=%d",j,i,i*j);
				int a=j*i;
				int m=0;
				int t=a;
				while(t>0) {
					t/=10;
					m++;
				}
				if(m==1) {
					printf("   ");
				} else if(m==2) {
					printf("  ");
				}
				
				
		}
		k++;
		printf("\n");
		if(k==10) {
			goto out;
		}
	}
	out:
		
	
	
	
	

		
		
		
	

		
	
	return 0;
}
