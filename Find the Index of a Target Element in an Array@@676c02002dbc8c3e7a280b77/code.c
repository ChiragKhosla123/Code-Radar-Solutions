#include <stdio.h>

int main() {
    int n,a[100],g[100],s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]==s){
         printf("%d",i);
        }
        else{
            printf("-1");
        }
    }
    return 0;
}