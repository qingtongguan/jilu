#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main (){
	char a[]="hello world";
//	char *p=strchr(a,'l');
//	p=strchr(++p,'l');
//	printf("%s\n",p);
//	char *p=strrchr(a,'l');
//	printf("%s\n",p++);
	char *p=strchr(a,'l');
	char c=*p;
	*p=0;
	printf("%s\n",a);
	*p=c;
	printf("%s\n",a);
	int b=strstr(a,'llo');
	printf("%d\n",b);


	
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char *mycpy(char *a,const char *b);
//int main() {
//	char *dst="Hello World!";
//	char *ist=(char *)malloc(sizeof(dst));
//	mycpy(ist,dst);
//	char *p=strchr(ist,'W');
//	printf("%s\n",p);
//	free(ist);
//	
//	return 0;
//}
//char *mycpy(char *a,const char *b) {
//	int i=0;
//	while(b[i]!='\0') {
//		a[i]=b[i];
//		i++;
//	}
//	a[i]='\0';
//	
//	
//	return a;
//}
//结束咯！"纸上得来终觉浅，需知此事要躬行！" 
