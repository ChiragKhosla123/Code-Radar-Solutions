#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s,t,z;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        s=0;
        z=a[i];
    for(int i=1;i<=z;i++){
        if(z%2==0){
            if(z>s){
                t=z;
            }
        }
    }
    if(a[i]%2==0){
    printf("%d",t);
    }
    else{
        printf("-1");
    }
    }
    return 0;
}