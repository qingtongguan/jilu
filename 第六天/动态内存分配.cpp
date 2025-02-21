//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int number;
//	scanf("%d",&number);
//	int *a;
//	a=(int *) malloc(number*sizeof(int));
//	int i;
//	for(i=0;i<number;i++) {
//		scanf("%d",&a[i]); 
//	}
//	for(i=0;i<number;i++) {
//		printf("%d\t",a[i]); 
//	}
//	free(a);
//	
//	return 0;
//} 
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	void *p;
//	int cnt=0;
//	while((p=malloc(1024*1024*100)) ) {
//		cnt++;
//	}
//	printf("分配到了%d00MB的空间。\n",cnt);
//	free(p);
//	return 0;
//} 
#include<stdio.h>
#include<stdlib.h>
int main() {
	void *p;
	int cnt=0;
	p=malloc(1024*1024*100);
	p++;
	free(p);
	return 0;
} 




