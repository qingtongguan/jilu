#include<stdio.h>

int search(int key,int length,int a[]);
int main() {
	int a[]={2,4,6,7,1,3,5,9,11,13,23,19};
	int x;
	printf("���������µ�����!\n");
	scanf("%d",&x); 
	int loc=search(x,sizeof(a)/sizeof(a[1]),a);
	if(loc!=-1) {
		printf("%d�ڵ�%d��λ����\n",x,loc);
	} else {
		printf("�Ҳ����������\n");
	}
		
	return 0;
}
	int search(int key,int length,int a[]){
			int i=0;
			int ret=-1;
			for(i=0;i<length;i++) {
				if (key==a[i]) {
					ret=i;
					break;
				}
			}
		return ret;	
	
}
