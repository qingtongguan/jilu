#include <stdio.h>

int main() 
{
	int cj;
	printf("���������ĳɼ���Ҫ��0��100֮��Ŷ����\n");
	scanf("%d",&cj);
	cj/=10;
	if(cj>10||cj<0) {
		printf("��Ӵ������"); 
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
