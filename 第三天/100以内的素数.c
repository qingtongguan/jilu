//#include<stdio.h>
//int main() {
//	
//	int i;
//	int x=2;
//	int isoPrem;
//	printf("100���ڵ�������");
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
	printf("����Ҫ���ٸ�������"); 
	scanf("%d",&m);
	int isoPrem;
	printf("ǰ%d��������",m);
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
			printf("��%d��:%d  ",k,x);
			n++;
		}
		
		isoPrem=0;
		x++;
		
		
		
	}while(n!=m);

	return 0;
}        
