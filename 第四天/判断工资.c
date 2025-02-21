#include<stdio.h>
int main() {
    int sarage=0;
    int year,hour;
    scanf("%d %d",&year,&hour);
    if(year>=5) {
        sarage=50;
    } else{
        sarage=30;
    }
    double sum;
    if(hour<=40) {
        sum=hour*sarage;
    } else {
    	 sum=(hour-40)*sarage*1.5+sarage*40;
	}
       
    
        printf("%.2f",sum);
}
