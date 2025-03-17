#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s=-10,t;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=abs(n);i++){
        if(a[i]%2==0){
            if(a[i]>s){
                s=a[i];
            }
        }
    }
    if(s%2==0){
    printf("%d",s);
    }
    else if(s%2==1){
        printf("-1");
    }
    return 0;
}