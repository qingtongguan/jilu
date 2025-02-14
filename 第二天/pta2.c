#include<stdio.h>
int main()
{
    int start_time,elapsed_minutes;
    scanf("%d %d",&start_time,&elapsed_minutes);
    int start_hour=start_time/100;
    int start_minutes=start_time%100;
    int sum=start_hour*60+start_minutes+elapsed_minutes;
    int sum_a=sum/60;
    int sum_b=sum%60;
    printf("%d",sum_a*100+sum_b); 


return 0;
}
