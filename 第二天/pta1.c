#include<stdio.h>

int main()
{
double length;
int foot,inch;
scanf("%lf", &length);
length/=100;
foot=length/0.3048;
inch=length/0.3048*12-foot*12;
printf("%d %d\n",foot,inch);

return 0;
}
