// Your code here...
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,t,s;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            s=0;
        while(-10<a[i]){
        t=a[i]%10;
        a[i]=a[i]/10;
        s=s+t;
        }
        printf("%d ",s);
        break;
        }
        
    }
}