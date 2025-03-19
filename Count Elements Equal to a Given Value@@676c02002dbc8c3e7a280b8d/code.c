#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(k==a[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}