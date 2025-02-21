 #include<stdio.h>
int main() {
	int x;
	printf("ÇëÊäÈëxµÄÖµ\n");
	scanf("%d",&x);
	int t=x;
	int a;
	int m=1;
	while(t>9) {
		t/=10;
		m*=10;
	}
//	printf("%d\n",m);
	do{
		a=x/m;
		printf("%d ",a );
		x%=m;
		m/=10;
	}while(m>0);
	
	
	
	
	return 0;
}     

