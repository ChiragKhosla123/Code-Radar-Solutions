#include <stdio.h>

int main() {
    int n,a[100],s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]==s){
            s=a[i];
            printf("%d",s);
            break;
        }
        else{
            printf("-1");
            break;
        }
    }
    return 0;
}