#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int i=0;
    int k=0;
    int j=0;
    int n=0;
    for (i=a;i<=a+3;i++){
        for (j=a;j<=a+3;j++){
            if(j==i){
                continue;
            } 
            for (k=a;k<=a+3;k++){
            if(k==i||k==j){
                continue;
            } 
                printf("%d%d%d",i,j,k);
                n++;
                if(n%6!=0){
                    printf(" ");
					}else {
                        printf("\n");
                    }
                }
                
        
    }
    }

    

return 0;
}
