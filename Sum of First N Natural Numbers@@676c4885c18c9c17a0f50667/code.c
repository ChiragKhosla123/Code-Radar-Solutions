#include <stdio.h>

int main() {
    int s,n;
    scanf("%d",&n);
    s=0;
    for(int i=0;i<n;i++){
        s=s+i;
    }
    printf("%d",s);
    return 0;
}