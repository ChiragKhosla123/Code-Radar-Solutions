#include <stdio.h>

int main() {
    double a,b;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    switch(c){
        case '+':
        printf("%.0lf",a+b);
        break;
        case '-':
        printf("%.0lf",a-b);
        break;
        case '*':
        printf("%.0lf",a*b);
        break;
        case '/':
        if(b==0){
            printf("error");
        }else{
            printf("%.0lf",a/b);
        }
       
        break;
    }
    return 0;
}