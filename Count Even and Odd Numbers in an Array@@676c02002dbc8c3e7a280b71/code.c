#include <stdio.h>

int main() {
    int a[100],n,ecount=0,ocount=0;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            ecount++;
        }
        else{
            ocount++;
        }
    }
    printf("%d ",ecount);
    printf("%d",ocount);
    return 0;
}