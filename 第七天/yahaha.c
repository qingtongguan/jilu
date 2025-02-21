#include<stdio.h>
int main(int argc,char const *argv[])
{
	char s1[]="Abc";
	char s2[]="abc";
	printf("%d\n",mycmp(s1,s2));
	
	return 0;
}
int mycmp(const char *s1,const char *s2) {
	while(*s1==*s2&&*s1!='\0') {
		s1++;
		s2++;
	}
	return *s1-*s2;
}
