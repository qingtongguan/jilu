#include<stdio.h>
int main() {

    int A,B;
    scanf("%d %d",&A,&B);
    int i;
    int n=0;
    int sum=0;
    for (i=A;i<=B;i++) {
        printf("%5d",i);
        n++;
        sum+=i;
        if(n%5==0){
            printf("\n");
        }  
        
    }
    if(n%5!=0){
        printf("\n");
    }
    printf("Sum=%d",sum);


    return 0;
}
