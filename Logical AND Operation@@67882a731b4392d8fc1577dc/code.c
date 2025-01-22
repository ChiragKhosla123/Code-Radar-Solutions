#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(0<a&&b){
        printf("True");
    }
    else if(a&&b<=0){
        printf("False");
    }
    return 0;
}