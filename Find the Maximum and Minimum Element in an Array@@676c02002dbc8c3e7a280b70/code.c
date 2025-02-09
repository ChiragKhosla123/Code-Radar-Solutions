#include <stdio.h>

int main() {
    int a[100],b,s=0;
    scanf("%d",&b);
    for(int i=0;i<b;++i){
        scanf("%d",&a[i]);
        if(a[i]<s){
            printf("%d ",a[i]);
        }
        else{
            printf("%d",a[i]);
        }
    }
    return 0;
}