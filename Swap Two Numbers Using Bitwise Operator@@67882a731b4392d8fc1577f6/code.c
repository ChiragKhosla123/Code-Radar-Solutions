#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    a=b;
    b=a;
    c=a;
    printf("%d %d",a,c);
    return 0;
}