#include <stdio.h>

int main() {
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",a[i]);
    if(a[i]%2==0){
        printf("%d",i);
        }
    else{
        printf("%d",i);
    }
    }
    return 0;
}