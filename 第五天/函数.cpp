#include<stdio.h>


void sum(int begin,int end){
	int i;
	int sum=0;
	for (i=begin;i<=end;i++) {
		sum+=i;
		
	}
	printf("%d��%d�ĺ�Ϊ%d\n",begin,end,sum);
}
int main() {
	
	sum(1,10);
	sum(10,45);
	sum(40,90);
	
	
	
	return 0; 
} 
