#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s=0,t;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            if(a[i]>s){
                t=a[i];
            }
        }
    }
    if(a[i]%2==0){
    printf("%d",t);
    }
    else{
        printf("-1");
    }
    return 0;
}