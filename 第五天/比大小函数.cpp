#include<stdio.h>


//�ȴ�С��
int max(int a,int b) {
	int ret;
	if(a>b) {
		ret=a;
	} else{
		ret=b;
	}
	return ret;
} 
int main(){

	
//   int result=max(10,32);
   printf("�ϴ������%d\n",max(10,32)); 
	
	
	return 0; 
} 
