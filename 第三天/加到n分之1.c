// #include<stdio.h>
//int main() {
//	
//	int n;
//	printf("�ӵ���Ϊֹ��\n");
//	scanf("%d",&n);
//	int i;
//	double sum;
//	for (i=1;i<=n;i++) {
//		sum+=1.0/i ;
//		
//	}
//	printf("����ӵ�1/%d�Ļ������Ϊ%lf\n",n,sum);
//	
//	return 0;
//}   
 #include<stdio.h>
int main() {
	
	int n;
	printf("�ӵ���Ϊֹ��\n");
	scanf("%d",&n);
	int i;
	double sign=1.0;
	double sum;
	for (i=1;i<=n;i++) {
		sum+=sign/i;
		sign=-sign;
	}
	printf("����ӵ�1/%d�Ļ������Ϊ%lf\n",n,sum);
	
	return 0;
}     




















     
