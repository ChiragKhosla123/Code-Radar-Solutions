#include <stdio.h>

int main() {
    int n,s;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        s=n*i;
        printf("%d x %d = %d",n,i,s);
    }
    return 0;
}