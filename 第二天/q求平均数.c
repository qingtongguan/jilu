#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() 
{	
	int number;
	int sum=0;
	int count=0;
	scanf("%d",&number);
	while(number!=-1){
		sum+=number;
		count+=1;
		scanf("%d",&number);
	}
	printf("ƽ����Ϊ%f��һ��%d����\n",1.0*sum/count,count);
	
	
	
return 0;
		
	
}
