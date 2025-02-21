#include<stdio.h>
int main() {
    int a,b;
    char std;
    scanf("%d %c %d",&a,&std,&b);
    int kk=0;
    int sum;
    switch(std){
        // case "+":sum=a+b;break;
        // case "-":sum=a-b;break;
        // case "*":sum=a*b;break;
        // case "/":sum=a/b;break;
        // default : kk=1;break;
        case '+':sum=a+b;break;
        case '-':sum=a-b;break;
        case '*':sum=a*b;break;
        case '/':if(b==0){
            kk=1;
            break;
        } else{
            sum=a/b;
            break;
        }
        default : kk=1;break;
            
    }
    if(kk==0){
        printf("%d\n",sum);
    } else {
        printf("ERROR\n");
    }

    
    return 0;
}
