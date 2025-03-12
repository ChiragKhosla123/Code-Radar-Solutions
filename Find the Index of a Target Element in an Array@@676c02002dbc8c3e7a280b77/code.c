#include <stdio.h>

int main() {
    int n,a[100],g[100],s[i]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]==s[i]){
            printf("%d",s[i]);
        }
        else{
            printf("-1");
            break;
        }
    }
    return 0;
}