#include <stdio.h>

int main() {
    unsigned int a,b;
    scanf("%d%d",&a,&b);
    if(b==1){
        printf("%u",a>>1);
    }
    else{
        printf("%u",a>>2)
    }
    return 0;
}