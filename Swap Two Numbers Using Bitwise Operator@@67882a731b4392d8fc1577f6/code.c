#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a;
    b=c;
    c=b;
    printf("%d %d",b,c);
    return 0;
}