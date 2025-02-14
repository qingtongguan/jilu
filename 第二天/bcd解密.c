#include <stdio.h>

int main() 
{
    int bcd;
    scanf("%d",&bcd);
    int a=bcd/16;
    int b=bcd%16;
    printf("%d %d",a,b);

    return 0;
}
