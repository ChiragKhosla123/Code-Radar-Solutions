#include<stdio.h>
int main(){
    int n,r,count=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]>k){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}