// Your code here...
#include<stdio.h>
int main(){
    int n,a[100],s=0,t[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        while(0<a[j]){
        t[j]=a[j]%10;
        a[j]=a[j]/10;
        s=s+t[j];
        }
        }
        printf("%d ",s);
    }
}