#include<stdio.h>
int main(){
    int n,a[n],t,s,z;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        s=0;
        n=z;
        while(0<=z){
        t=a[i]%10;
        a[i]=a[i]/10;
        s=s*10+t;
        }
        if(s==n){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}