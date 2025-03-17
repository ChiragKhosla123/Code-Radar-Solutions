#include<stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            if(a[i]>s){
                printf("%d",a[i]);
            }
            else{
                printf("-1");
            }
        }
    }
    return 0;
}