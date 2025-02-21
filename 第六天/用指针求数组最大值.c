#include<stdio.h>
void maxmin(int a[],int length,int *max,int *min); 
int main() {
	int max,min;
	int a[]={12,16,2,48,57,3,5,85,1,84,45,56};
	maxmin(a,sizeof(a)/sizeof(a[0]),&max,&min);
	printf("%d %d\n",max,min);	
	return 0;
}
void maxmin(int a[],int length,int *max,int *min) {
	int i;
	for (i=0;i<length;i++) {
		if(a[i]>*max) *max=a[i];
		if(a[i]<*min) *min=a[i];
	}

	
}
