#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s=-1,t;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        z=a[i];
        if(z%2==0){
            if(z>s){
                t=z;
            }
        }
    printf("%d",t);
    }
    return 0;
}