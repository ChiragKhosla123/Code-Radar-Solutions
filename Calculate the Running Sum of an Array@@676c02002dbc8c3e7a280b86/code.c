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
        for(int i=1;i<=n;j++){
            s=s+i;
            printf("%d ",s);
        }
    }
    return 0;
}