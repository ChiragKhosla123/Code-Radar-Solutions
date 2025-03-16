#include<stdio.h>
int main(){
    int n,a[n],t;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    s=0;
    for(int i=1;i<=n;i++){
        t=a[i]%10;
        a[i]=a[i]/10;
        s=s*10+t;
        if(a[i]==s){
            printf("YES");
            break;
        }
        else{
            printf("NO");
            break;
        }
    }
    return 0;
}