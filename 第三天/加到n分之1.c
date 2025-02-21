// #include<stdio.h>
//int main() {
//	
//	int n;
//	printf("加到几为止？\n");
//	scanf("%d",&n);
//	int i;
//	double sum;
//	for (i=1;i<=n;i++) {
//		sum+=1.0/i ;
//		
//	}
//	printf("如果加到1/%d的话，结果为%lf\n",n,sum);
//	
//	return 0;
//}   
 #include<stdio.h>
int main() {
	
	int n;
	printf("加到几为止？\n");
	scanf("%d",&n);
	int i;
	double sign=1.0;
	double sum;
	for (i=1;i<=n;i++) {
		sum+=sign/i;
		sign=-sign;
	}
	printf("如果加到1/%d的话，结果为%lf\n",n,sum);
	
	return 0;
}     




















     
