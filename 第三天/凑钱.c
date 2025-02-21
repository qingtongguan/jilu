// #include<stdio.h>
//int main() {
//	
//	int x;
//	int n;
//	int edit=0; //edit用于看到有一个方法就结束； 
//	int a,b,c;
//	printf("请输入您想尝试的金额（元）\n");
//	scanf("%d",&x);
//	for(a=0;a<=x/0.5;a++) {
//		for(b=0;b<=x/0.2;b++) {
//			for(c=0;c<=x/0.1;c++) {
//				if(a*0.5+b*0.2+c*0.1==x){
//					printf("用%d枚5角，%d枚2角，%d枚1角可以凑出%d元\n",a,b,c,x); 
//					n++;
//					edit=1; 
//					break;
//				}
//			
//			}
//			if(edit=1) break;
//		}
//			if(edit=1) break;
//	}
//	printf("共%d种方法\n",n);
//	
//	return 0;
//}   
 #include<stdio.h>
int main() {
	
	int x;
	int n;
	int edit=0; //edit用于看到有一个方法就结束； 
	int a,b,c;
	printf("请输入您想尝试的金额（元）\n");
	scanf("%d",&x);
	for(a=0;a<=x/0.5;a++) {
		for(b=0;b<=x/0.2;b++) {
			for(c=0;c<=x/0.1;c++) {
				if(a*0.5+b*0.2+c*0.1==x){
					printf("用%d枚5角，%d枚2角，%d枚1角可以凑出%d元\n",a,b,c,x); 
					n++;
					edit=1; 
					
				}
			
			}
			goto out;
		}
			
	}
	out:
	printf("共%d种方法\n",n);
	
	return 0;
}             
