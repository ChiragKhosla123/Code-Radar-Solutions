// Your code here...
#include<stdio.h>
int main(){
    int n,t,s=0;
    scanf("%d",&n);
    while(0<n){
        t=n%10;
        n=n/10;
        s=s*10+t;
        printf("%d",s);
    }
    return 0;
}