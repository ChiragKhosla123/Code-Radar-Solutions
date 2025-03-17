#include<stdio.h>
int main(){
    int n,t,s,z,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
            s=0;
            z=a[i];
            while(0<z){
                t=z%10;
                z=z/10;
                s=s*10+t;
                }
                if(s==a[i]){
                    count++;
                }
    }
    printf("%d",count);
    return 0;
}