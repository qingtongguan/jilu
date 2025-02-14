#include <stdio.h>

int main() 
{
	int cj;
	printf("请输入您的成绩（要在0到100之间哦！）\n");
	scanf("%d",&cj);
	cj/=10;
	if(cj>10||cj<0) {
		printf("哎哟，你干嘛！"); 
		} else {
			switch(cj) {
				case 10:
				case 9 :
					printf("A\n");
					break;
				case 8:
					printf("B\n");
					break;
				case 7:
					printf("C\n");
						break;
				case 6:
					printf("D\n");
					break;
				default:
					printf("E\n");
					break;
			}
		}
	
	
	
			
	
	return 0;
}  
