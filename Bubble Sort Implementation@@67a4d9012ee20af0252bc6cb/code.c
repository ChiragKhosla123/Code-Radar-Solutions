#include<stdio.h>
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        printf("%d",a[i]);
    }
}