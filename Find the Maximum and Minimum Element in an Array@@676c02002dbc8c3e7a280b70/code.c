#include <stdio.h>

int main() {
    int a[100]=0,b,s=a[0],n=a[0];
    scanf("%d",&b);
    for(int i=0;i<b;++i){
        scanf("%d",&a[i]);
    if(a[i]<s){
        s=a[i];
        }
    else if(a[i]>n){
        n=a[i];
        }
    }
    printf("%d %d",s,n);
    return 0;
}