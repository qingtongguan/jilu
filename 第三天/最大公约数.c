 #include<stdio.h>
int main() {
	int a,b;
	printf("���������������ҽ�������ǵ����Լ����\n"); 
	scanf("%d %d",&a,&b);
	int t;
	while(b>0){
		t=a%b;
		a=b;
		b=t;
		printf("a=%d,b=%d,t=%d\n",a,b,t);
	}
	printf("���Լ��Ϊ%d\n",a);
	
	
	
	
	return 0;
}     

