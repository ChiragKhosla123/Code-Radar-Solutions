#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        int s=0;
        for(int j=1;j<=n;j++){
            s=s+j;
            printf("%d",s);
        }
    }
    return 0;
}