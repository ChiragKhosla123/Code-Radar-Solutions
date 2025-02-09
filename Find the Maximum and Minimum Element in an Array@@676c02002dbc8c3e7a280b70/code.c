#include <stdio.h>

int main() {
    int a[100],b,s,n;
    scanf("%d",&b);
    s=n=a[0];
    for(int i=1;i<b;++i){
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