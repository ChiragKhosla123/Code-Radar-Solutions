#include<stdio.h>
int main(){
    int n,a[n],t,s,z;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        s=0;
        a[i]=z;
        while(0<z){
        t=z%10;
        z=z/10;
        s=s*10+t;
        }
        if(s==a[i]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}