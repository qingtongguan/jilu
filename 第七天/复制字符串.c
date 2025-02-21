#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *mycpy( char *a, const char *b);
int main() {
	char *str="Hello World!";
	char *dst=(char*)malloc(strlen(str)+1);
	mycpy(dst,str);
	printf("%s",dst);
	free(dst);
	return 0;

}
char *mycpy( char *a, const char *b) {
	int i=0;
	while(b[i]!='\0') {
		a[i]=b[i];
		i++;
	}
	a[i]='\0';
	return a;
}
































































