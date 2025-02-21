//#include<stdio.h>
//int main() {
//	
//	int i;
//	int x=2;
//	int isoPrem;
//	printf("100以内的素数有");
//	do{
//		
//		isoPrem=0;
//		for(i=2;i<x;i++) {
//			if(x%i==0) {
//				isoPrem=1;
//				break;
//			}
//		
//		}
//		if(isoPrem==0){
//			printf("%d  ",x);
//		}
//		
//		isoPrem=0;
//		x++;
//		
//		
//	}while(x!=101);
//
//	return 0;
//}     
#include<stdio.h>
int main() {
	
	int i;
	int x=2;
	int n=0; 
	int m;
	int k=0;
	printf("你想要多少个素数？"); 
	scanf("%d",&m);
	int isoPrem;
	printf("前%d个素数有",m);
	do{
		
		isoPrem=0;
		for(i=2;i<x;i++) {
			if(x%i==0) {
				isoPrem=1;
				break;
			}
		
		}
		if(isoPrem==0){
			k++;
			printf("第%d个:%d  ",k,x);
			n++;
		}
		
		isoPrem=0;
		x++;
		
		
		
	}while(n!=m);

	return 0;
}        
