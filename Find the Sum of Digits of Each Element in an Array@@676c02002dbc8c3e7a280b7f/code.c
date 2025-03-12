// Your code here...
#include<stdio.h>
int main(){
    int n,a[100],t,s;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            s=0;
        while(0<a[i]){
        t=a[i]%10;
        a[i]=a[i]/10;
        s=s+t[i];
        }
        printf("%d ",s);
        }
        
    }
}