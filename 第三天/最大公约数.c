 #include<stdio.h>
int main() {
	int a,b;
	printf("请输入两个数，我将输出他们的最大公约数！\n"); 
	scanf("%d %d",&a,&b);
	int t;
	while(b>0){
		t=a%b;
		a=b;
		b=t;
		printf("a=%d,b=%d,t=%d\n",a,b,t);
	}
	printf("最大公约数为%d\n",a);
	
	
	
	
	return 0;
}     

