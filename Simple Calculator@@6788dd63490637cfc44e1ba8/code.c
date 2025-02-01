#include <stdio.h>

int main() {
    int a,b;
    char c;
    int d,e,f;
    scanf("%d%d%c",&a,&b,&c);
    switch(c){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        default:
        printf("error");
        break;
    }
    return 0;
}