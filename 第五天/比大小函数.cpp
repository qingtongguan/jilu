#include<stdio.h>


//比大小；
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
   printf("较大的数是%d\n",max(10,32)); 
	
	
	return 0; 
} 
