// Your code here...
#include<stdio.h>
int main(){
    int n,a[100],s=0,t;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        while(0<a[i]){
        t=a[i]%10;
        a[i]=a[i]/10;
        s=s+t;
        }
        printf("%d ",s);
    }
}