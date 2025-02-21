#include<stdio.h>
void f(int *p);
int main() {
	int c;
	printf("&c=%p\n",&c);
	f(&c);
}
void f(int *p) {
	printf("%p\n",p) ;
	printf("%p\n",*p) ;
	printf("%p\n",&p) ;
	printf("%p\n",&*p) ;
}
